#include <iostream>

using namespace std;
void print_difference(int max, int data);
int find_max(int ary[], int size);
int main()
{
	int i, max, sc[5], x;

	cout << "Enter 5 numbers: ";
	for (i = 0; i < 5; i++)
		cin >> sc[i];
	//인자로서 전체 배열

	max = find_max(sc, 5);

	cout << "Defferences= ";
	//인자로서 각 배열 요소
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
int find_max(int ary[], int size)
{
	int max = ary[0];

	max = ary[0];
	int i;
	for (i = 1; i < size; i++)
		if (ary[i] > max)
			max = ary[i];
	cout << "Max = " << max << endl;
	return max;
}
