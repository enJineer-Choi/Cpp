#include <iostream>		// 단항 연산자(++,--), 멤버 함수로 오버로딩 
using namespace std;

class Money{
public:
    Money(int pdollars=0, int pcents=0);
    void get_Money() const;
    void set_Money();
    int get_dollars() const;
    int get_cents() const;
	// 전위/후위 연산자 오버로딩  
    Money operator++(); //전위 증가
    Money operator++(int); //후위 증가 -> 전위 증가 연산자와 구별해주기 위해 임의로 객체형을 적어줌
    //Money operator()++  불가능
private:
    int dollars;
    int cents;  		 
};

// 전위 연산자 오버로딩
Money Money::operator++()
{
    dollars++;
    cents++;
    return Money(dollars, cents);

}

// 후위 연산자 오버로딩
Money Money::operator++(int nouse) //임시 변수에 저장시켜서 증가 시킨뒤 값을 리턴시키는 형태
{
    int tpdollars = dollars; 
    int tpcents = cents;
    dollars++;  //호출 객체의 값 증가
    cents++;    //호출 객체의 값 증가
    return Money(tpdollars, tpcents);   //증가되기 전의 값을 리턴

}

int main()
{
	Money p1(10, 40), p2(20, 60), p3;
	
    // 연산자 오버로딩
    //cout << "전위 증가" << endl;
    //p3 = ++p1;  //p3=p1.operator++();
    ////++p1; //p1.operator++();
    //cout << "p1= " << endl;
    //p1.get_Money();
    //cout << "p3= " << endl;
    //p3.get_Money();
    //++p2;
    //cout << "p2= " << endl;
    //p2.get_Money();

    cout << "후위 증가" << endl;
    p3 = p1++;  //p3.++operator();불가능 컴파일러가 인식 못함-> operator++() 이렇게 쓸수밖에없음.
    cout << "p1=" << endl;
    p1.get_Money();
    cout << "p3= " << endl;
    p3.get_Money();
    p2++;
    cout << "p2= " << endl;
    p2.get_Money();

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
