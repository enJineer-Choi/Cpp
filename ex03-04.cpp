#include <iostream>
#include <cmath>

using namespace std;

//double vl(double P,double r);
//double ar(double P,double r);

void vl(double P, double r);
void ar(double P, double r);

int main()
{
	double radius, volume,area;
	double PI = 3.14;

	cout << "Enter a radius: ";
	cin >> radius;

	
	
	/*volume = (4.0 / 3.0) * PI * pow(radius, 3);*/ //함수이름 vl
	/*vl(radius);
	cout << "the volume is " << vl(radius) << endl;*/
	
	//반환값 존재하는 함수
	/*volume = vl(PI, radius);
	cout << "the volume is " << volume << endl;*/

	//반환값 존재하지 않는 함수
	vl(PI, radius);


	/*
	area = ar(PI, radius);
	cout << "the area is " << area << endl;*/

	//반환값 존재하는 함수
	/*area = PI * pow(radius, 2);*/  // ar
	/*ar(radius);
	cout << "the area is " << ar(radius) << endl;*/

	//반환값 존재하지 않는 함수
	ar(PI, radius);



	return 0;
}
//처음 내가 만든 함수
//double vl(double r) {
//	double volume;
//	double PI = 3.14;
//	volume = (4.0 / 3.0) * PI * pow(r, 3);
//	return volume;
//}
//
//double ar(double r) {
//	double area;
//	double PI = 3.14;
//	area = PI * pow(r, 2);
//	return area;
//}

//반환값 존재하는 함수 (with 교수님)
//double vl(double P, double r) {
//	return (4.0 / 3.0) * P * pow(r, 3);
//}
//
//double ar(double P, double r) {
//	return P * pow(r, 2);
//}


//반환값 존재하지 않는 함수
void vl(double P, double r) {
	double v = (4.0 / 3.0) * P * pow(r, 3);
	cout << "the volume is "<< v<< endl;
}

void ar(double P, double r) {
	double a = P * pow(r, 2);
	cout << "the area is "<<a<< endl;
}