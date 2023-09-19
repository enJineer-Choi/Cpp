#include <iostream>

using namespace std;

int main()
{
	int score;
	char grade;

	cout << "Enter your score: ";
	cin >> score;

	/*if (score >= 60) cout << "You passed" << endl;
	if (score <60) cout << "You failed" << endl;*/

	/*if (score >= 60) cout << "You passed" << endl;
		else cout << "You failed" << endl;*/

	/*
	if (score >= 60)
	{
		grade = 'P';
		cout << "Your grade is " << grade<<endl;
	}
	else
	{
		grade = 'F';
		cout << "You grade is " << grade<<endl;
	}
	*/

	if (score >= 90)
	{
		grade = 'A';
		cout << "Your grade is " << grade << endl;
	}
	else if (score >= 80)
	{
		grade = 'B';
		cout << "Your grade is " << grade << endl;
	}
	else if (score >= 70)
	{
		grade = 'C';
		cout << "Your grade is " << grade << endl;
	}
	else if (score >= 60)
	{
		grade = 'D';
		cout << "Your grade is " << grade << endl;
	}
	else
	{
		grade = 'F';
		cout << "Your grade is " << grade << endl;
	}
	return 0;
}
