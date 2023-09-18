#include <iostream>

using namespace std;

int main()
{
	double radius, volume;
	double PI = 3.14;

	cout << "Enter a radius: ";
	cin >> radius;

	volume = (4.0 / 3.0) * PI * radius * radius * radius;
	cout << "the volume is " << volume << endl;
	return 0;
}
