#include <iostream>
#include <fstream> //파일 입출력
#include <string>

using namespace std;

int main()
{
	int score,index;
	char grade;

	ifstream scfile;
	string name;


	scfile.open("namescore.txt");

	scfile >> index;
	cout << "There are " << index << " people to evaluate" << endl;

	for(int i=0;i<index;i++)
	{
		scfile >> name;
		scfile >> score;

		switch (score / 10)
		{
		case 9:
			cout << name;
			grade = 'A';
			cout << "'s grade is " << grade << endl;
			break;
		case 8:
			cout << name;
			grade = 'B';
			cout << "'s grade is " << grade << endl;
			break;
		case 7:
			cout << name;
			grade = 'C';
			cout << "'s grade is " << grade << endl;
			break;
		case 6:
			cout << name;
			grade = 'D';
			cout << "'s grade is " << grade << endl;
			break;
		default:
			cout << name;
			grade = 'F';
			cout << "'s grade is " << grade << endl;
			break;

		}
		
	} 
	scfile.close();
	return 0;
}
