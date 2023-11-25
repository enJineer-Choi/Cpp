/* 14.1 상속
        Employee 클래스를 상속받는 SalariedEmployee 클래스를 구현하라.
        추가되는 멤버 변수: double Salary;
                 멤버 함수: void setSalary(double newSalary);
                            double getSalary() const;
                            void printCheck() const;
							2개의 SalariedEmployee 생성자
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

// SalariedHourlyEmployee 클래스 인터페이스
class SalariedEmployee : public Employee
{
public:
    SalariedEmployee();
    SalariedEmployee(const string& theName,const string&theSsn,double theSalary);
    void setSalary(double newSalary);
    double getSalary() const;
    void printCheck() ;
private:
    double Salary;

};

// main 함수 
int main(){
    
    SalariedEmployee s1, s2("Lee","0508", 500);
    
    s1.setName("Yang");
    s1.setSsn("0606");
    s1.setSalary(700);
    
    
    cout << "<s1의 정보 출력>\n";
    cout << s1.getName() << endl; 
    cout << s1.getSsn() << endl; 
    cout << s1.getSalary() << endl;
    s1.printCheck(); cout << endl; 

    cout << "<s2의 정보 출력>\n";
    cout << s2.getName() << endl; 
    cout << s2.getSsn() << endl; 
    cout << s2.getSalary() << endl;
    s2.printCheck(); cout << endl;     

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

// SalariedEmployee 클래스 구현 
SalariedEmployee::SalariedEmployee():Employee(),Salary(0)
{

}
SalariedEmployee::SalariedEmployee(const string& theName, const string& theSsn, double theSalary):
    Employee(theName,theSsn),Salary(theSalary)
{

}
void SalariedEmployee::setSalary(double newSalary)
{
    Salary = newSalary;
}
double SalariedEmployee::getSalary() const
{
    return Salary;
}
void SalariedEmployee::printCheck() 
{
    setNetPay(Salary);//const로 선언되었기 때문에 오류 발생
    cout << "---------------------------------------" << endl;
    cout << "Name : " << getName() << endl;
    cout << "Number : " << getSsn() << endl;
    cout << "Your are an Salariedemployee" << endl;
    cout << "NetPay: " << getNetPay() << endl;
    cout << "---------------------------------------" << endl;

}
