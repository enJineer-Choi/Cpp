/* 14.1 상속
        Employee 클래스를 상속받는 HourlyEmployee 클래스를 구현하라.
        추가되는 멤버 변수: double Hours, double Rate
                멤버 함수: double getHours() const;
                          double getRate() const;
                          void setHours(double hoursWorked);
                          void setRate(double newRate);
        파생 클래스의 생성자 구현 
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
    void printCheck() const;
private:
    string Name;
    string Ssn;
    double NetPay;
};

// HourlyEmployee 클래스 인터페이스
/* 파생 클래스는 추가되는 멤버 변수와 함수만 정의한다. */
class HourlyEmployee : public Employee
{
public:    /* 기반 클래스의 생성자는 파생 클래스에 상속되지 않는다. 대신 파생 클래스의
       생성자에서 기반 클래스의 생성자를 호출할 수 있다.*/
    HourlyEmployee();
    HourlyEmployee(const string& theName,const string& theSsn,double theRate,double theHours);///theName,theSsn은 어떻게 초기화?

    double getHours() const;
    double getRate() const;
    void setHours(double hoursWorked);
    void setRate(double newRate);

private:    // 기반 클래스의 멤버 변수는 자동으로 상속받는다. 
    double Hours, Rate;

};





// main 함수 
int main(){
    
    HourlyEmployee h1, h2("Hong","0329", 10, 30);
    
    h1.setName("Kang");
    h1.setSsn("0308");
    h1.setRate(20);
    h1.setHours(15);
    
    cout << "<h1의 정보 출력>\n";
    cout << h1.getName() << endl; 
    cout << h1.getSsn() << endl; 
    cout << h1.getHours() << endl;
    cout << h1.getRate() << endl;

    cout << "<h2의 정보 출력>\n";
    cout << h2.getName() << endl; 
    cout << h2.getSsn() << endl; 
    cout << h2.getHours() << endl;
    cout << h2.getRate() << endl;
    
    cout << endl;
    // 기반 클래스가 사용될 수 있는 곳에는 파생 클래스도 사용할 수 있다.
    // 즉, 파생 클래스의 객체는 하나 이상의 타입을 가진다. 
    Employee e1, e2("Kim", "0103");
    e2 = h2;
    //h2 = e1;///-> h2는 2개의 타입이 존재하는데 하나로 통합?// 오류 발생
    
    cout << "<e2의 정보 출력>\n";
    cout << e2.getName() << endl; 
    cout << e2.getSsn() << endl; 

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
/* 기반 클래스의 생성자를 호출하는 문법은 멤버 변수의 값을 설정하는 문법과 
   유사하다. 만약 기반 클래스의 생성자를 호출하는 부분이 없으면, 기반 클래스의 
   디폴트 생성자 Employee()을 자동 호출한다. 
   Employee()없다면, 오류
   호출 순서: 파생 순서와 같다. */
// 생성자
HourlyEmployee::HourlyEmployee():Employee(),Rate(0),Hours(0)
{

}
HourlyEmployee::HourlyEmployee(const string& theName, const string& theSsn  ///theName,theSsn은 어떻게 초기화?
    , double theRate, double theHours):Employee(theName,theSsn),Rate(theRate),Hours(theHours)
{

}
void HourlyEmployee::setRate(double newRate)
{ Rate = newRate; }

double HourlyEmployee::getRate() const
{ return Rate; }

void HourlyEmployee::setHours(double hoursWorked)
{ Hours = hoursWorked; }

double HourlyEmployee::getHours() const
{ return Hours; }
