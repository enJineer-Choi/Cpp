#include <iostream>

using namespace std;

int main()
{
	int var1 = 10, var2 = 20;
	int &ref1 = var1;

	ref1 = 99;
	cout << var1 << endl;
	var1 = 88;
	cout << ref1 << endl;

	//int &ref2; //오류-> 대상이 없음
	//&ref1 = var2; //error ->값을 변경하려고 해서
	//int &ref2 = var1 + var2;
	//int &ref2=3;

	//포인터 변수
	int  *p;
	p = &var1;
	cout << p << endl;
	cout << *p << endl;
	p = &var2;
	cout << p << endl;
	cout << *p << endl;
	return 0;
}