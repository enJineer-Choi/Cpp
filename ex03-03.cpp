#include <iostream>
#include <cmath>

using namespace std;

//int roundoff(double(dv)); //int roundoff(double); // 실습3
void roundoff(double(dv)); //void roundoff(double); // 실습4

int main()
{
	//정수형 반올림 계산 : 실습1
	/*double dv;
	cout << "Enter a number : ";
	cin >> dv;
	cout << "round off number : ";
	cout<< static_cast<int>(floor(dv+0.5))<<endl;*/

	//정수형 반복 반올림 계산 : 실습2
	/*double dv;
	char ans;
	do {
		cout << "Enter a number : ";
		cin >> dv;

		
		cout << "round off number : ";
		cout << static_cast<int>(floor(dv + 0.5)) << endl;
		cout << "Again? (y/n): ";
		cin >> ans;

	} while (ans == 'y' || ans == 'Y');*/

	//정수형 반복 반올림  함수: 실습3
	/*double dv;
	char ans;
	do {
		cout << "Enter a number : ";
		cin >> dv;


		cout << "round off number : ";
		cout << roundoff(dv) << endl;
		cout << "Again? (y/n): ";
		cin >> ans;

	} while (ans == 'y' || ans == 'Y');*/

	//정수형 void 반복 반올림  함수: 실습4
	double dv;
	char ans;
	do {
		cout << "Enter a number : ";
		cin >> dv;

		roundoff(dv);
		
		cout << "Again? (y/n): ";
		cin >> ans;

	} while (ans == 'y' || ans == 'Y');
	return 0;
}
/*int roundoff(double(dv)) //실습3
{
	int res;
	res= static_cast<int>(floor(dv + 0.5));
	return res;
	//return static_cast<int>(floor(dv + 0.5));
	
}
*/
void roundoff(double(dv))  //실습4
{
	cout << "round off number : ";
	cout<< static_cast<int>(floor(dv + 0.5));

}