#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main()
{
	double radius, volume;
	const double PI=3.14 ;
/*	string st1, st2, st3;

	cin >> st1 >> st2 >> st3;
	
	cout << st1 + " " + st2 + " " + st3 + ": ";
*/
	cout << "Enter a radius: ";
	cin >> radius;

	volume = (4.0 /static_cast<double>(3)) * PI * pow(radius,3);
	cout << "the volume is " << volume << endl;
	
	bool tf;
	cout << "Is is True? : ";
	cin >> tf;
	if (tf == true) cout << "Nice \n";
	else cout << "Try again \n";

	return 0;
}
