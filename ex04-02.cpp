#include <iostream>

using namespace std;

void print_data(int x, int y);

int main()
{
	int a, b;
	cout << "Enter two numbers : ";
	cin >> a >> b;

	cout << "Before swap : " << a<<" "<< b<<endl;
	
	
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	print_data(a, b);
	return 0;
}

void print_data(int x, int y) {
	cout << "After swap : " << x << " " << y << endl;
}