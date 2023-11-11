// 10.2 동적 배열 - 배열 변수와 포인터변수
#include <iostream> 
using namespace std;

int main()
{
    // 배열 변수(배열명)
    char a[4]={'a', 'b', 'c','d'};
    char *cp;
    
    // 포인터 상수 
    cp = a; //a=cp; 오류 a는 포인터 상수
    // 대괄호 ->배열일때 사용가능
    cout << a[0] << cp[1] << endl;

    // 포인터의 산술연산 
    cout << *cp << *(cp + 1) << endl;
    return 0;
}
