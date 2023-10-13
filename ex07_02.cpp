#include <iostream>  // DayOfYear 생성자
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

int main()
{
    DayOfYear date1("May", 5), date2("Feb"), date3;//data3(); -> 오류 발생
    

    // 출력
    date1.output();
    date2.output();
    date3.output();
    return 0;
}
//생성자
DayOfYear::DayOfYear(string m, int d) {
    month = m;
    day = d;
}
DayOfYear::DayOfYear(string m) {
    month = m;
 //   day = 1;
}
DayOfYear::DayOfYear() { 
    //month = "Jan";
    //day = 1;
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
