#include <iostream> // 구조체,접근방법, 할당연산자

using namespace std;



struct Account{
	int number; //계좌번호
	char name[10];  //예금주
	double value;  //잔액
};
//void input_Account(Account& p);
Account input_Account();
void output_Account(Account p);


int main()
{
	Account p1, p2;
	//입력

	/*input_Account(p1);*/
	p1 = input_Account();

	p2 = p1;
	//출력

	output_Account(p2);

	
	return 0;
}
//void input_Account(Account p) -> error 발생
//void input_Account(Account &p) { //void 버전
//	cout << "ID= ";
//	cin >> p.number;
//	cout << "Name= ";
//	cin >> p.name;
//	cout << "value= ";
//	cin >> p.value;
//}

Account input_Account() { //Return 값이 존재하는 버전
	Account p;
	cout << "ID= ";
	cin >> p.number;
	cout << "Name= ";
	cin >> p.name;
	cout << "value= ";
	cin >> p.value;

	return p;
}





void output_Account(Account p) {//내가 만든 type이므로 Account형임
	cout << "ID= " << p.number << endl;
	cout << "Name= " << p.name << endl;
	cout << "Value= " << p.value << endl;
}

