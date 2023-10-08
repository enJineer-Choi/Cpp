#include <iostream> //구조체, 입력/출력 함수 추가
					//멤버함수 분리 -> 클래스 속에는 함수원형만 작성
using namespace std;

class Account{
private:
	int number; //계좌번호
	char name[10];  //예금주
	double value;  //잔액
public:
	//입력
	void input_Account();

	//잔액 증감
	void up_value();
	void down_value();
	void multi_value(int m);

	//출력
	void output_Account();

};


int main()
{
	Account p1, p2;
	//입력
	p1.input_Account();
	p2.input_Account();

	// 잔액 증감
	p1.up_value();
	p2.down_value();

	int m = 2;
	p2.multi_value(m);
	
	//출력
	p1.output_Account();
	p2.output_Account();
	
	return 0;
}

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