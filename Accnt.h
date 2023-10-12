#include <iostream> //헤더파일에는 클래스에 대한 정보만 작성.
using namespace std;

class Account{
private:
	int number; //계좌번호
	char name[10];  //예금주
	double value;  //잔액
public:
	//입력
	void input_Account();

	//잔액 증감
	void up_value();
	void down_value();
	void multi_value(int m);

	//출력
	void output_Account();

};


