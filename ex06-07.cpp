#include "Accnt.h"

int main()
{
	Account p1, p2;
	//입력
	p1.input_Account();
	p2.input_Account();

	// 잔액 증감
	p1.up_value();
	p2.down_value();

	int m = 2;
	p2.multi_value(m);
	
	//출력
	p1.output_Account();
	p2.output_Account();
	
	return 0;
}
