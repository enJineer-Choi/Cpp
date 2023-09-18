#include <iostream>

using namespace std;

int main()
{
	double radius, volume;
	double PI ;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(10);

	cout << "Enter a radius and PI: ";
	cin >> radius>>PI;

	volume = (4.0 / 3.0) * PI * radius * radius * radius;
	cout << "the volume is " << volume << endl;
	return 0;
}
