/* 14.1 ���
        ��ӵ� �Լ��� ������
        protected ������ 
        �Ļ� Ŭ������ �Լ� overloading
        �Ļ� Ŭ�������� ��� Ŭ���� �Լ��� ���� ����   
*/ 
#include <iostream>
#include <string>
using namespace std;

// Employee Ŭ���� �������̽� 
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
    void printCheck() const;    // ���� ���Ǵ� �Ļ� Ŭ������ �ִ�. 
private:  
//protected: �Ļ� Ŭ������ ��� Ŭ������ private ������ ���� ���� ����
    string Name;
    string Ssn;
    double NetPay;
};

// HourlyEmployee Ŭ���� �������̽�
/* �Լ��� ������: ��ӵ� ��� �Լ��� ���� ���ο� ������ ���Ѵٸ�, 
   �Ļ� Ŭ������ �����ϰ� �������ϸ� �ȴ�.  */
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
    // �Լ� ������
    void printCheck();

    // �Լ� overloading
    // void setName(const string& first, const string& last);
	// first�� last�� ���� �̸� ������ �ʿ���. �߰� �ڵ� �ʿ�
private:
    double Rate; 
    double Hours;
};

// main �Լ� 
int main(){
    
    HourlyEmployee h1, h2("Hong","0329", 10, 20);
    
    h1.setName("Kang");
    h1.setSsn("0308");
    h1.setRate(20);
    h1.setHours(15);
    
    cout << "<h1�� ���� ���>\n";
    cout << h1.getName() << endl; 
    cout << h1.getSsn() << endl; 
    cout << h1.getHours() << endl;
    cout << h1.getRate() << endl;
    h1.printCheck(); cout << endl; 

    cout << "<h2�� ���� ���>\n";
    cout << h2.getName() << endl; 
    cout << h2.getSsn() << endl; 
    cout << h2.getHours() << endl;
    cout << h2.getRate() << endl;
    h2.printCheck(); cout << endl;     

    // �Ļ� Ŭ�������� ��� Ŭ���� �Լ��� ���� ����
    h2.Employee::printCheck();
    
    cout << endl;

    return 0;
}

// Employee Ŭ���� ���� 
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

// HourlyEmployee Ŭ���� ���� 
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

// �Լ� ������
/* ��� �Ļ� Ŭ������� ������ ��� Ŭ������ private ��� ������ �Լ��� ����
   ������ ���Ѵ�. */
//protected�� �����ϸ� �Լ��� ������� �ʰ� ������ ����� �� ����.
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

////��� Ŭ������ private������ ���� ���� ����  -> ���� �ڵ�� �ƴ� ; ��ü������ ö�п� ���� �ǹǷ�
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