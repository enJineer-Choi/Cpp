#include <iostream>

using namespace std;
void get_data(int* x, int* y);
void print_data(int x, int y);
void swap_data(int& x, int& y);
int main()
{
	int a, b;
	
	get_data(&a, &b);
	swap_data(a,b);
	print_data(a, b);
	return 0;
}

void get_data(int *x, int *y) {
	cout << "Enter two numbers : ";
	//cin >> x >> y; 주소값이 변경되어서 들어가게됨
	cin >> *x >> *y;
	cout << "Before swap : " << *x << " " << *y << endl;
}


void swap_data(int &x,int &y) {
	int temp;

	temp = x;
	x = y;
	y = temp;

}

void print_data(int x, int y) {
	cout << "After swap : " << x << " " << y << endl;
}

