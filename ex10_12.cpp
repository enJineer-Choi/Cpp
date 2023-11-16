/* 10.3 클래스, 포인터 및 동적 배열 - 소멸자, 복사 생성자
        복사 생성자가 호출되는 3가지 경우
		 1. 클래스의 객체가 선언되고 괄호 안에서 
			같은 타입의 다른 객체로 초기화되는 경우
		 2. 함수가 클래스형의 값을 반환하는 경우
		 3. 함수의 call-by-value 매개 변수로 넘어가는 경우
*/ 
#include <iostream> 
using namespace std;

class DArray{
    public:
        DArray();   // 용량=50
        DArray(int size);
        // 복사 생성자 

        int getcp() {return cp;}
        int getused() {return used;}
        void addem(double em) {a[used] = em; used++;}
        void setem(int index, double em) {a[index]=em;} 
        double getem(int index) {return a[index];}
        // 할당 연산자 
        DArray& operator = (const DArray& rs);
        // 소멸자 

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

DArray& DArray::operator = (const DArray& rs){
    if (this == &rs){
        return *this;
    }
    else {
        cp = rs.cp;
        used = rs.used;
        delete [] a;   // 기존 동적배열 a를 반환한다. 
        a = new double[cp];
        for(int i=0; i<used; i++)
            a[i] = rs.a[i];
        return *this;    
    } 
}

// 복사 생성자 (1)

// 복사 생성자 (2) (3)

// 소멸자 


int main(){
 
    
    DArray dp1, dp2(10);
        
    // 초기화 
    dp1.addem(2); dp1.addem(3); dp1.addem(4);

	// 복사 생성자 (1): 클래스의 객체가 같은 타입의 다른 객체로 초기화되는 경우
    DArray dp3(dp1);
     
    // 복사 생성자 (2), (3): 함수의 인자와 리턴값 
    dp2 = fnc(dp1);

    // 빅쓰리: 복사 생성자, 할당연산자, 소멸자
    // 세가지중 하나라도 필요하다면 세가지 모두를 정의해야 한다.
    // 멤버 변수가 기본 타입(int, double 등)은 문제가 없다.
    // 그러나, 포인터나 new연산자를 사용하는 클래스는 빅쓰리를
    // 반드시 정의해야 한다.
     
    return 0;
}
