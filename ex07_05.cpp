#include <iostream>  // Ŭ���� ��Ӱ� �ʱ�ȭ ������ ����
#include <string>
using namespace std;

class DayOfYear
{
public:
    DayOfYear(string m, int d);
    DayOfYear(string m);
    DayOfYear();


    void input();
    void output();
    string getMonth();
    int getDay();
    void setMonthDay(string m, int d);
private:
    string month;
    int day;
};

class Holiday {
public:
    Holiday(string m,int d,bool h);
    Holiday();
    void output();
    
private:
    DayOfYear date;
    bool tf;
};

int main()
{
    Holiday children("May", 5, true), today("Oct", 6, false),date;
    
    // ���
    children.output();
    today.output();
    date.output();
    return 0;
}
//������+�ʱ�ȭ ����
DayOfYear::DayOfYear(string m, int d) :month(m), day(d) //��ӿ��� �ʱ�ȭ������ �̿�
{}
DayOfYear::DayOfYear(string m) :month(m),day(1)
{}
DayOfYear::DayOfYear() :month("Jan"),day(1)
{}



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
//Holiday ������ 
Holiday::Holiday(string m, int d, bool h):date(m,d),tf(h) {}
Holiday::Holiday() :date(),tf(true) {}
void Holiday::output() {
    date.output();
    cout << "Holiday = " << tf << endl;
}