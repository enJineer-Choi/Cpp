#include <iostream>

using namespace std;

void print_data(int x, int y);
void swap_data(int& x, int& y);
int main()
{
	int a, b;
	cout << "Enter two numbers : ";
	cin >> a >> b;

	cout << "Before swap : " << a<<" "<< b<<endl;
	
	
	swap_data(a,b);
	print_data(a, b);
	return 0;
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

