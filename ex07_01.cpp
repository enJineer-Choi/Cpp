#include <iostream>  // DayOfYear Ŭ���� ���� 
#include <string>
using namespace std;

class DayOfYear
{
public:
    void input();
    void output();
    string getMonth();
    int getDay();
    void setMonthDay(string m, int d);
private:
    string month;
    int day;
};

int main()
{
    DayOfYear date1, date2, date3;
    
    // �Է�
    date1.input();
    
    // ����
    date1.setMonthDay("Jan", 3);
    
    // ���
    date1.output(); 
    
    return 0;
}

void DayOfYear::input()
{
    cout << "Month & day: ";
    cin >> month >> day;
}

void DayOfYear::output()
{
    cout << "Month = " << month << endl;
    cout << "Day = " << day << endl;
}

string DayOfYear::getMonth()
{
    return month;
}

int DayOfYear::getDay()
{
    return day;
}

void DayOfYear::setMonthDay(string m, int d)
{
    month = m;
    day = d;
}
