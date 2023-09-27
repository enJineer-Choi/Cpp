#include <iostream>

using namespace std;
void get_data(int& x, int& y, double& z);
double avg(int x, int y);
double avg(int x, double y);
double avg(int x, int y, double z);

int main()
{
	int a, b;
	double c;

	get_data(a,b,c);

	//함수 오버로딩
	cout << "The mean of two number= " << avg(a,b) << endl;
	cout << "The mean of two number= " << avg(a,c) << endl;
	cout << "The mean of two number= " << avg(a,b,c) << endl;

	return 0;
}

void get_data(int &x, int &y,double &z) {
	cout << "Enter two numbers : ";
	//cin >> x >> y; 주소값이 변경되어서 들어가게됨
	cin >> x >>y>>z;
	
}

double avg(int x, int y) {
	return (x + y) / 2.0;
}

double avg(int x, double y) {
	return (x + y) / 2.0;
}

double avg(int x, int y,double z) {
	return (x + y + z) / 3.0;
}
