// 10.1 포인터 - 동적 변수 
#include <iostream> 
using namespace std;

int main()
{
    // new 연산자
    int* p1;
    p1 = new int;   //정수형 동적변수 
    *p1 = 7;
    //p1 = new int(7);    //9,10 line을 동시에 
    cout << *p1 << endl;
    
    // NULL 포인터 
    //p1 = NULL;
    //cout << p1 << endl; //cout<<*p1<<end; -> 오류 발생 why?? 가리키는 값이 없어서

    // delete 연산자
    
     
    // 허상 포인터
    int* p2;
    p2 = p1;
    delete p1;  //p2와 p1이 같은 곳을 가리키고 있는데 p1을 반납하면서 p2가 가리키는 곳이 사라짐
    p2 = NULL;  //따라서 p2를 허상포인터로 정의해서 가리키는 곳이 없도록 만들어줌.
    cout << p2 << endl; //*p2 예측 불가능한 값 (compiler마다 다름)

    return 0;
}
