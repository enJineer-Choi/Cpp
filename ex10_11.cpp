// 10.3 클래스, 포인터 및 동적 배열 - 할당 연산자 오버로딩
#include <iostream> 
using namespace std;

class DArray{
    public:
        DArray();   // 용량=50
        DArray(int size);
        int getcp() {return cp;}
        int getused() {return used;}
        void addem(double em) {a[used] = em; used++;}
        double getem(int index) {return a[index];}
        // 할당 연산자 오버로딩

    private:
        double *a;
        int cp;     // 용량
        int used;   // 사용량 
};

DArray::DArray(): cp(50), used(0){
    a = new double[cp];
}

DArray::DArray(int size): cp(size), used(0){
    a = new double[cp];
}

// 다른 항인 경우 A=B;


// 다른 항과 같은 항인 경우 A=B;, A=A;


int main(){

    DArray dp1, dp2(10);
    
    // 다른 항인 경우 A=B; 
   
    // 같은 항인 경우
   

    // 얕은 복사: 멤버 변수를 단순 복사(기본 할당연산자, 기본 복사연산자)
    //           예) cp, used
    // 깊은 복사: 멤버 변수가 동적변수일 때, 분리되어 있는 복사를 가지기 위하여
    //           각 멤버변수가 가리키는 것을 복사    예) a 

    return 0;
}
