// 10.3 클래스, 포인터 및 동적 배열  -> 연산자, this 포인터
#include <iostream> 
using namespace std;

class DArray{
    public:
        DArray();   // 기본 용량=50
        DArray(int size);
        int getcp() {return cp;}
        int getused() {return used;}
        void addem(double em) {a[used] = em; used++;}
        double getem(int index) {return a[index];}
         
        // this 포인터

        // 멤버 변수 호출

    private:
        double *a;
        int cp;     // 용량
        int used;   // 사용량 
};

DArray::DArray(): cp(50), used(0){

}

DArray::DArray(int size): cp(size), used(0){

}

int main(){
    DArray dp1, dp2(10);

    // this 포인터 
    
    // 사용도1:  멤버 변수를 사용하여 멤버 함수나 생성자를 호출하는 경우
    
    // 사용도2: 할당연산자의 오버로딩
    // <할당연산자의 오버로딩이 없는 경우> - 기본 할당연산자 사용 
    // 문제점: 동적변수(a)의 주소값을 같이 복사한다. 
    //        즉, dp1.a과 dp2.a가 같은 곳을 가리킨다.
  
    return 0;
}
