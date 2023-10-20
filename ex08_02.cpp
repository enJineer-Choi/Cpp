#include <iostream>	// 연산자 오버로딩: 멤버 함수로 오버로딩 
using namespace std;

class Money {
public:
    Money(int pdollars = 0, int pcents = 0);
    void get_Money() const;
    void set_Money();
    Money set_return(); // set and return
    int get_dollars() const;
    int get_cents() const;
    // 멤버 함수로 연산자 오버로딩
    //Money operator+(Money b) // 1.(call-by-value) 
    //Money operator+(const Money &b) // 2.(call-by-reference) 효율성과 b의 멤버변수 변경 방지
    //const Money operator+(const Money & b) // 3. return값의 멤버변수 변경 방지
    const Money operator+(const Money &b) const// 4. 자신의 멤버변수 변경방지
    {
        //dollars = 0; //자신의 멤버변수를 변경하는 예제-> 해결방안? 4번 
        int allcents = cents + b.get_cents(); //cents-> p1의 cents
        int finalcents = allcents % 100;
        int finaldollars = dollars + b.get_dollars() + (allcents / 100);
        return Money(finaldollars, finalcents);
    }
private:
    int dollars;
    int cents;  		 
};

int main()
{
    Money p1(10, 40), p2(20, 70), p3;
	
    // 연산자 오버로딩
    p3 = p1 + p2; //p3 = p1.operator+(p2); //공백은 상관없다.
    p3 = p2 + p1;//p3=p2.operator+(p1);
    // const에 의한 리턴값의 변경 방지
    //p3 = (p1 + p2).set_return(); //Money operator+(const Money &b) ->const로 선언했음에도 불구하고 p3값이 변경이 가능.
    // 교환 법칙 성립 안함
    //p3 = p2 + 10;
    //p3 = 10 + p2;
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
    cout << "dollars & cents=? "; cin >> dollars >> cents;
	return Money(dollars, cents);
}