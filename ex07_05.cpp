#include <iostream>  // 클래스 상속과 초기화 섹션의 응용
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
    
    // 출력
    children.output();
    today.output();
    date.output();
    return 0;
}
//생성자+초기화 섹션
DayOfYear::DayOfYear(string m, int d) :month(m), day(d) //상속에서 초기화섹션을 이용
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
//Holiday 생성자 
Holiday::Holiday(string m, int d, bool h):date(m,d),tf(h) {}
Holiday::Holiday() :date(),tf(true) {}
void Holiday::output() {
    date.output();
    cout << "Holiday = " << tf << endl;
}