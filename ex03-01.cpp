#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double f1, f2;
	cout << "Enter two real numbers : ";
	cin >> f1 >> f2;

	cout << "square root : " << sqrt(f1) << endl;
	cout << "powers : " << pow(f1, f2) << endl;
	cout << "Absolute : " << fabs(f1) << endl;
	cout << "Round up : " << ceil(f1) << endl;
	cout << "Round down : " << floor(f1) << endl;


	exit(1);
	int n1; long n2;

	cout << "Enter two integer numbers : ";
	cin >> n1 >> n2;
	cout << "Absolute : " << abs(n1) << endl;
	cout << "Absolute: " << labs(n2) << endl; //long형의 절댓값 함수


	return 0;
}
