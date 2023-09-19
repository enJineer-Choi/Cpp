#include <iostream>

using namespace std;

int main()
{
	int score,index;
	char grade;

	cout << "How many people do you have to evaluate? ";
	cin >> index;

	/*while (index > 0)*/
	//do
	for(int i=0;i<index;i++)
	{
		cout << "Enter your score: ";
		cin >> score;

		//if (score >= 100) break;
		if (score >= 100) continue;

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
		//index--;
	} //while (index > 0);

	return 0;
}
