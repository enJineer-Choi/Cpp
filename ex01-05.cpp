#include <iostream>

using namespace std;

int main()
{
	cout << !1 << endl;
	cout << !0 << endl;
	cout << !3 << endl;

	//int tf;
	bool tf;

	for (int i = 0; i < 5; i++)
	{
		cout << "input? ";
		cin >> tf;  // tf가 정수냐, 불이냐에 따라 달라짐
		if (tf == true) cout << "True \n"; // 정수 or 불형 == 불형 비교
		else cout << "False \n";
	}

	return 0;
}

