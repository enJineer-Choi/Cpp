/* 14.1 ���
        Employee Ŭ������ ��ӹ޴� HourlyEmployee Ŭ������ �����϶�.
        �߰��Ǵ� ��� ����: double Hours, double Rate
                ��� �Լ�: double getHours() const;
                          double getRate() const;
                          void setHours(double hoursWorked);
                          void setRate(double newRate);
        �Ļ� Ŭ������ ������ ���� 
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
    void printCheck() const;
private:
    string Name;
    string Ssn;
    double NetPay;
};

// HourlyEmployee Ŭ���� �������̽�
/* �Ļ� Ŭ������ �߰��Ǵ� ��� ������ �Լ��� �����Ѵ�. */
class HourlyEmployee : public Employee
{
public:    /* ��� Ŭ������ �����ڴ� �Ļ� Ŭ������ ��ӵ��� �ʴ´�. ��� �Ļ� Ŭ������
       �����ڿ��� ��� Ŭ������ �����ڸ� ȣ���� �� �ִ�.*/
    HourlyEmployee();
    HourlyEmployee(const string& theName,const string& theSsn,double theRate,double theHours);///theName,theSsn�� ��� �ʱ�ȭ?

    double getHours() const;
    double getRate() const;
    void setHours(double hoursWorked);
    void setRate(double newRate);

private:    // ��� Ŭ������ ��� ������ �ڵ����� ��ӹ޴´�. 
    double Hours, Rate;

};





// main �Լ� 
int main(){
    
    HourlyEmployee h1, h2("Hong","0329", 10, 30);
    
    h1.setName("Kang");
    h1.setSsn("0308");
    h1.setRate(20);
    h1.setHours(15);
    
    cout << "<h1�� ���� ���>\n";
    cout << h1.getName() << endl; 
    cout << h1.getSsn() << endl; 
    cout << h1.getHours() << endl;
    cout << h1.getRate() << endl;

    cout << "<h2�� ���� ���>\n";
    cout << h2.getName() << endl; 
    cout << h2.getSsn() << endl; 
    cout << h2.getHours() << endl;
    cout << h2.getRate() << endl;
    
    cout << endl;
    // ��� Ŭ������ ���� �� �ִ� ������ �Ļ� Ŭ������ ����� �� �ִ�.
    // ��, �Ļ� Ŭ������ ��ü�� �ϳ� �̻��� Ÿ���� ������. 
    Employee e1, e2("Kim", "0103");
    e2 = h2;
    //h2 = e1;///-> h2�� 2���� Ÿ���� �����ϴµ� �ϳ��� ����?// ���� �߻�
    
    cout << "<e2�� ���� ���>\n";
    cout << e2.getName() << endl; 
    cout << e2.getSsn() << endl; 

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
/* ��� Ŭ������ �����ڸ� ȣ���ϴ� ������ ��� ������ ���� �����ϴ� ������ 
   �����ϴ�. ���� ��� Ŭ������ �����ڸ� ȣ���ϴ� �κ��� ������, ��� Ŭ������ 
   ����Ʈ ������ Employee()�� �ڵ� ȣ���Ѵ�. 
   Employee()���ٸ�, ����
   ȣ�� ����: �Ļ� ������ ����. */
// ������
HourlyEmployee::HourlyEmployee():Employee(),Rate(0),Hours(0)
{

}
HourlyEmployee::HourlyEmployee(const string& theName, const string& theSsn  ///theName,theSsn�� ��� �ʱ�ȭ?
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
