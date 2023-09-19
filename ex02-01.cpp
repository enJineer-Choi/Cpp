#include <iostream>

using namespace std;

int main()
{
	int score;
	bool decision;


	cout << "Enter your score: ";
	cin >> score;

	cout.setf(ios::boolalpha);

	cout << (score >= 60) << endl;

	decision = (score >= 60);
	cout << decision << endl;

	cout << !(false || true) << endl;
	cout << ((5 > 6) && (7 / 0) )<< endl;
	cout << !(5 && 7) << (!(!6)) << endl;

	return 0;
}
