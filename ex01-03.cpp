#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	double radius, volume;
	double PI ;
	
	
	cout << "Enter a radius and PI: ";
	cin >> radius>>PI;

	volume = (4.0 / 3.0) * PI * radius * radius * radius;
	cout << "the volume is " << volume << endl;
	return 0;
}
