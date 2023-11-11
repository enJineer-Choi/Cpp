// 10.1 포인터
#include <iostream> 
using namespace std;

int main()
{
    // 포인터 변수의 선언
    //double *d1, d2;
    //int *p1, *p2;   //int* p1,p2; ->pointer형 변수 p1,p2를 동시에 썼다는 의미
    ////int* p1, * p2; -> 불확실성 존재
     
    // typedef
    //typedef int* IntPtr;    //int*를 IntPtr로 다시 정의
    //IntPtr p1, p2;  //int* p1,p2와 동일한 정의
    // &와 *
    int* p1, v1;
    p1 = &v1;
    *p1 = 3;
    cout << v1 << endl;
    v1 = 7;
    cout << *p1 << endl;

    // 포인터 연산
    int *p2, v2;
    p2 = &v2;
    //p2 = p1 + p2;   //오류
    //p2 = p2 + 1;    //불확실한 값 출력 그러나 배열에서는 의미가 있음(p2가 가르키는 주소의 1칸 뒤의 값을 p2에 할당)
    p2 = p1;    //할당연산자, *p2=*p1;-> 가리키는  과의 의미 구분
    cout << *p2 << endl;
    return 0;
}
