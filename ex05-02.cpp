#include <iostream>

using namespace std;
void print_difference(int max, int data);
int main()
{
	int i, max, sc[5], x;

	cout << "Enter 5 numbers: ";
	for (i = 0; i < 5; i++)
		cin >> sc[i];
	max = sc[0];
	for (i = 1; i < 5; i++)
		if (sc[i] > max)
			max = sc[i];
	cout << "Max = " << max << endl;
	cout << "Defferences= ";
	//인자로소 각 배열 요소
	for (i = 0; i < 5; i++)
	{
		print_difference(max, sc[i]);
	}

	return 0;
}
void print_difference(int max, int data)
{
	cout << (max - data) << " ";
}
