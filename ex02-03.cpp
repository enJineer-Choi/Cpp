#include <iostream>

using namespace std;

int main()
{
	int score;
	char grade;

	cout << "Enter your score: ";
	cin >> score;

	switch (score / 10)
	{
	case 9:
		grade = 'A';
		cout << "Your grade is " << grade << endl;
		break;
	case 8:
		grade = 'B';
		cout << "Your grade is " << grade << endl;
		break;
	case 7:
		grade = 'C';
		cout << "Your grade is " << grade << endl;
		break;
	case 6:
		grade = 'D';
		cout << "Your grade is " << grade << endl;
		break;
	default:
		grade = 'F';
		cout << "Your grade is " << grade << endl;
		break;

	}
	return 0;
}
