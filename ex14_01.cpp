// 14.1 ����� ���� 

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
  
// main �Լ� 
int main(){
    
    Employee e1, e2("Kim","0103");
    
    e1.setName("Park");
    e1.setSsn("0209");
    
    cout << "<e1�� ���� ���>\n";
    cout << e1.getName() << endl; 
    cout << e1.getSsn() << endl; 
    cout << e1.getNetPay() << endl;
    e1.printCheck(); cout << endl; 

    cout << "<e2�� ���� ���>\n";
    cout << e2.getName() << endl; 
    cout << e2.getSsn() << endl; 
    cout << e2.getNetPay() << endl; 
    e2.printCheck(); cout << endl;     
    
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


