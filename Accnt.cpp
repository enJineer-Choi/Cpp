#include <iostream> 
#include "Accnt.h"
using namespace std;


//입력
void Account::input_Account() {//input_Account()함수는 Account클래스에 속한다는 의미 -> 클래스 정의문제
	cout << "ID= ";
	cin >> number;
	cout << "Name= ";
	cin >> name;
	cout << "value= ";
	cin >> value;
}


//출력
void Account::output_Account() {
	cout << "ID= " << number << endl;
	cout << "Name= " << name << endl;
	cout << "Value= " << value << endl;
}

//잔액 증감
void Account::up_value() {
	value += 100;
}

void Account::down_value() {
	value -= 100;
}

void Account::multi_value(int m) {
	value *= m;
}