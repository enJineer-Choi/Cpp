#include <iostream>		// << >>  멤버 함수 형태로는 연산자 오버로딩 못함. 
#include <cmath>
using namespace std;

class Money{
public:
    Money(int pdollars=0, int pcents=0);
    void get_Money() const;
    void set_Money();
    int get_dollars() const;
    int get_cents() const;
    // 연산자 오버로딩
    friend ostream& operator<<(ostream& a, const Money& m);  //출력
    friend istream& operator>>(istream& b, Money& m); //입력 const사용 X
private:
    int dollars;
    int cents;  		 
};

// << 연산자 오버로딩
ostream& operator<<(ostream& a,const Money& m) //cout 은 ostream의 하나의 객체
{
    a << "$";
    a << m.dollars;
    a << ".";
    a << m.cents;
    return a;
}
// >> 연산자 오버로딩
istream& operator>>(istream& b, Money& m) //cin 은 istream의 하나의 객체 , 입력을 받아야 하므로 const를 붙이면 안됨
{
    double amount;
    b >> amount;
    m.dollars = static_cast<int>(amount); 
    int cents = static_cast<int>(floor(amount * 100 + 0.5));
    m.cents = cents % 100;
    return b;
}
int main()
{
	Money p1(10, 40), p2(50, 90), p3;
	
	// 출력  
    /*p1.get_Money();
    p2.get_Money();*/
    
    // << >> 연산자 오버로딩
	// 출력 형태 $10.40 $50.90
    //cout << p1 << endl;//cout.operator<<(p1); 불가능 -> 일반함수형 + freind func으로
    //cout << p1 << p2;
	// 입력
    //p3.set_Money();

	// 입력 형태 30.40
	/*cout << "Enter your money? $" ; 
    cin >> p3;
    cout << p3;
    */
	// 입력, 출력 s
    cout << "Enter your money? $";
    cin >>p1>>p2>> p3;
    cout << p3 <<p2<<p1<< endl;

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
