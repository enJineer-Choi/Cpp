#include <iostream>
using namespace std;
//void find_max(int sc[][4], int max[], int row);
void find_max(int sc[][4], int max[], int row, int column);
void print_difference(int max, int data);
int main()
{
	int sc[2][4] = { {3,7,6,2},{10,16,14,13} };
	int max[2];
	
	/*find_max(sc,max,2);*/
	find_max(sc, max, 2,4);

	cout << "Max0= " << max[0] << endl;
	cout << "Max1= " << max[1] << endl;

	cout << "Difference" << endl;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 4; j++)
			print_difference(max[i], sc[i][j]);

	//주소값 확인
	cout << sc << endl;
	cout << &(sc[0][0]) << endl;
	return 0;
}

//void find_max(int sc[][4], int max[], int row)//배열의 차원을 함수 선언하는 곳에서 명시해주어야 함
void find_max(int sc[][4], int max[], int row,int column) //void find_max(int sc[][column], int max[], int row,int column) 으로 받으면 오류 발생
{
	for (int i = 0; i < row; i++) {
		max[i] = sc[i][0];// max의 초기화
		for (int j = 0; j < column; j++)
			if (sc[i][j] > max[i]) max[i] = sc[i][j];
	}
}
void print_difference(int max, int data)
{
	cout << (max - data) << " ";
}