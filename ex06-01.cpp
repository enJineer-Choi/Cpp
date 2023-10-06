#include <iostream> // 구조체,접근방법, 할당연산자

using namespace std;

struct Account{
	int number; //계좌번호
	char name[10];  //예금주
	double value;  //잔액
};
	


int main()
{
	Account p1, p2;
	//입력
	cout << "ID= ";
	cin >> p1.number;
	cout << "Name= ";
	cin >> p1.name;
	cout << "value= ";
	cin >> p1.value;

	p2 = p1;
	//출력
	cout << "ID= " << p2.number << endl;
	cout << "Name= " << p2.name << endl;
	cout << "Value= " << p2.value<< endl;
	return 0;
}
