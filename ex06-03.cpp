#include <iostream> //구조체, 입력/출력 함수 추가

using namespace std;

struct Account{
	int number; //계좌번호
	char name[10];  //예금주
	double value;  //잔액

	//입력
	void input_Account() { 
		cout << "ID= ";
		cin >> number;
		cout << "Name= ";
		cin >> name;
		cout << "value= ";
		cin >> value;
	}


	//출력
	void output_Account() {//내가 만든 type이므로 Account형임
		cout << "ID= " << number << endl;
		cout << "Name= " << name << endl;
		cout << "Value= " << value << endl;
	}
	
	
};


int main()
{
	Account p1, p2;
	//입력
	p1.input_Account();
	p2.input_Account();
	//출력
	p1.output_Account();
	p2.output_Account();
	
	return 0;
}
