/* 14.1 상속
        상속된 함수의 재정의
        protected 제한자 
        파생 클래스의 함수 overloading
        파생 클래스에서 기반 클래스 함수에 대한 접근   
*/ 
#include <iostream>
#include <string>
using namespace std;

// Employee 클래스 인터페이스 
class Employee
{
public:
    Employee();
    Employee(const string& theName, const string& theSsn);
    string getName() const;
    string getSsn() const;
    double getNetPay() const;
    void setName(const string& newName);
    void setSsn(const string& newSsn);
    void setNetPay(double newNetPay);
    void printCheck() const;    // 실제 정의는 파생 클래스에 있다. 
private:  
//protected: 파생 클래스는 기반 클래스의 private 변수를 직접 접근 가능
    string Name;
    string Ssn;
    double NetPay;
};

// HourlyEmployee 클래스 인터페이스
/* 함수의 재정의: 상속된 멤버 함수에 대한 새로운 구현을 원한다면, 
   파생 클래스에 선언하고 재정의하면 된다.  */
class HourlyEmployee : public Employee
{
public:
    HourlyEmployee();
    HourlyEmployee(const string& theName, const string& theSsn,
                   double theRate, double theHours);
    void setRate(double newRate);
    double getRate() const;
    void setHours(double hoursWorked);
    double getHours() const;
    // 함수 재정의
    void printCheck();

    // 함수 overloading
    // void setName(const string& first, const string& last);
	// first와 last를 위한 이름 변수가 필요함. 추가 코드 필요
private:
    double Rate; 
    double Hours;
};

// main 함수 
int main(){
    
    HourlyEmployee h1, h2("Hong","0329", 10, 20);
    
    h1.setName("Kang");
    h1.setSsn("0308");
    h1.setRate(20);
    h1.setHours(15);
    
    cout << "<h1의 정보 출력>\n";
    cout << h1.getName() << endl; 
    cout << h1.getSsn() << endl; 
    cout << h1.getHours() << endl;
    cout << h1.getRate() << endl;
    h1.printCheck(); cout << endl; 

    cout << "<h2의 정보 출력>\n";
    cout << h2.getName() << endl; 
    cout << h2.getSsn() << endl; 
    cout << h2.getHours() << endl;
    cout << h2.getRate() << endl;
    h2.printCheck(); cout << endl;     

    // 파생 클래스에서 기반 클래스 함수에 대한 접근
    h2.Employee::printCheck();
    
    cout << endl;

    return 0;
}

// Employee 클래스 구현 
Employee::Employee() : Name("No name"), Ssn("No number"), NetPay(0)
{ }

Employee::Employee(const string& theName, const string& theNumber)
   : Name(theName), Ssn(theNumber), NetPay(0)
{ }

string Employee::getName() const
{ return Name; }

string Employee::getSsn() const
{ return Ssn; }

double Employee::getNetPay() const
{ return NetPay; }

void Employee::setName(const string& newName)
{ Name = newName; }

void Employee::setSsn(const string& newSsn)
{ Ssn = newSsn; }

void Employee::setNetPay (double newNetPay)
{ NetPay = newNetPay; }

void Employee::printCheck() const
{ cout << "Your check is not determined yet."; }

// HourlyEmployee 클래스 구현 
HourlyEmployee::HourlyEmployee() : Employee(), Rate(0), Hours(0)
{ }

HourlyEmployee::HourlyEmployee(const string&  theName, const string&  theNumber,
                               double theRate, double theHours)
    : Employee(theName, theNumber), Rate(theRate), Hours(theHours)
{ }

void HourlyEmployee::setRate(double newRate)
{ Rate = newRate; }

double HourlyEmployee::getRate() const
{ return Rate; }

void HourlyEmployee::setHours(double hoursWorked)
{ Hours = hoursWorked; }

double HourlyEmployee::getHours() const
{ return Hours; }

// 함수 재정의
/* 비록 파생 클래스라고 할지라도 기반 클래스의 private 멤버 변수와 함수는 직접
   접근을 못한다. */
//protected로 선언하면 함수를 사용하지 않고도 변수를 사용할 수 있음.
void HourlyEmployee::printCheck() 
{
    setNetPay(Hours * Rate);
    cout << "---------------------------------------" << endl;
    cout << "Name : " << getName() << endl;
    cout << "Number : " << getSsn() << endl;
    cout << "Your are an hourly employee"<<endl;
    cout << "You worked for " << Hours << "with the rate"<<Rate<<endl;
    cout << "NetPay: " << getNetPay() << endl;
    cout << "---------------------------------------" << endl;

}

////기반 클래스의 private변수에 직접 접근 가능  -> 좋은 코드는 아님 ; 객체지향의 철학에 위배 되므로
//void HourlyEmployee::printCheck()
//{
//    NetPay=Hours * Rate;
//    cout << "---------------------------------------" << endl;
//    cout << "Name : " << Name<< endl;
//    cout << "Number : " << Ssn << endl;
//    cout << "Your are an hourly employee" << endl;
//    cout << "You worked for " << Hours << "with the rate" << Rate << endl;
//    cout << "NetPay: " << NetPay << endl;
//    cout << "---------------------------------------" << endl;
//
//}