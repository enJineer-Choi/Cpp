#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	srand(5); //실습2

	for (int i = 0; i < 10; i++) //실습 1
		cout << rand() << endl;

	for (int i = 0; i < 10; i++) //실습 3
		cout << rand()%11 << endl;

	cout << "Max= " << RAND_MAX << endl; //실습4

	for (int i = 0; i < 10; i++) //실습 5
		cout << (RAND_MAX-rand())/static_cast<double>(RAND_MAX) << endl;

	return 0;
}
