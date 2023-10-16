#include <iostream>	// 연산자 오버로딩: 일반(전역) 함수형태
using namespace std;

class Money{
public:
    Money(int pdollars=0, int pcents=0); //Money의 생성자
    void get_Money() const;
    void set_Money();
	
    Money set_return();// set and return

    int get_dollars() const;
    int get_cents() const;

private:
    int dollars;
    int cents;  		 
};

// 일반(전역) 함수 연산자 오버로딩 
//Money operator+(Money a,Money b) //1.call-by-value
//Money operator+(Money &a, Money &b) //2.call-by-reference ->효율성을 위해
//Money operator+(const Money& a, const Money& b) //3.멤버변수 변경 방지 by const사용
const Money operator+(const Money& a, const Money& b) //4.const에 의한 return값 변경 방지
{ 
    int allcents = a.get_cents() + b.get_cents();
    int finalcents = allcents % 100;
    int finaldollars = a.get_dollars() + b.get_dollars() + (allcents / 100);
    //a.set_return(); //2. 참조연산자의 잘못된 사용 -멤버 변수 변경 시도 & 가능 (a의 값이 변경됨)
    
    return Money(finaldollars, finalcents);
}

int main()
{
    Money p1(10, 40), p2(20,70), p3;
	
    // 입력
    //p2.set_Money();
    // 연산자 오버로딩
    p3 = p1;    //할당 연산자는 자동으로 오버로딩됨.
    p3 = p1 + p2;//->실제 사용법 :  p3 = operator+(p1, p2) & operator + : 공백에 상관이 없음
    // const 값에 의한 리턴 
    (p1 + p2).get_Money();  //return 값의 변경가능한 예제
    //(p1 + p2).set_Money();  //return 값의 변경가능한 예제

    // 교환 법칙 성립 
    p3 = p2 + p1;
    p3 = p1 + 10; //교환법칙 가능 : 10->Money 형으로 형변환되어서 연산 가능

    // 출력
	cout << "p1: "; p1.get_Money(); cout << endl;
	cout << "p2: "; p2.get_Money(); cout << endl;
	cout << "p3: "; p3.get_Money(); cout << endl;

    return 0;
}

// Money 생성자
Money::Money(int pdollars, int pcents) : dollars(pdollars), cents(pcents) {
}

void Money::set_Money(){
    cout << "dollars & cents=? "; cin >> dollars >> cents; 
}

void Money::get_Money() const {
    cout << "dollars & cents= " << dollars << " " << cents << endl; 
}

int Money::get_dollars() const{
    return dollars;
}
int Money::get_cents() const{
    return cents;
}

Money Money::set_return() {
    cout << "dollars & cents=? ";
    cin >> dollars >> cents;
    return Money(dollars, cents);
}