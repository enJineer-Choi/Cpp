#include <iostream>	// 자동 형 변환과 프랜드 함수  
using namespace std;

class Money{
public:
    Money(int pdollars=0, int pcents=0);
    void get_Money() const;
    void set_Money();
	int get_dollars() const;
    int get_cents() const;
	// 프랜드 함수 선언
    friend  const Money operator+(const Money& a, const Money& b);

private:
    int dollars;
    int cents;  		 
};

// 프랜드 함수 <--- 일반함수   멤버변수에 직접 접근가능 get_cents() & get_dollars()로 쓰지않아도 됨
const Money operator+(const Money& a, const Money& b) 
{
    int allcents = a.cents+ b.cents;
    int finalcents = allcents % 100;
    int finaldollars = a.dollars + b.dollars + (allcents / 100);

    return Money(finaldollars, finalcents);
}


int main()
{
	Money p1(10, 40), p2(20, 70), p3;
	
    // 연산자 오버로딩
    p3 = p1 + p2;
    // 교환 법칙  
    p3 = p1 + 10;
    p3 = 10 + p1;
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
