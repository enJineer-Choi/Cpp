// 10.3 Ŭ����, ������ �� ���� �迭 - �Ҵ� ������ �����ε�
#include <iostream> 
using namespace std;

class DArray{
    public:
        DArray();   // �뷮=50
        DArray(int size);
        int getcp() {return cp;}
        int getused() {return used;}
        void addem(double em) {a[used] = em; used++;}
        double getem(int index) {return a[index];}
        // �Ҵ� ������ �����ε�

    private:
        double *a;
        int cp;     // �뷮
        int used;   // ��뷮 
};

DArray::DArray(): cp(50), used(0){
    a = new double[cp];
}

DArray::DArray(int size): cp(size), used(0){
    a = new double[cp];
}

// �ٸ� ���� ��� A=B;


// �ٸ� �װ� ���� ���� ��� A=B;, A=A;


int main(){

    DArray dp1, dp2(10);
    
    // �ٸ� ���� ��� A=B; 
   
    // ���� ���� ���
   

    // ���� ����: ��� ������ �ܼ� ����(�⺻ �Ҵ翬����, �⺻ ���翬����)
    //           ��) cp, used
    // ���� ����: ��� ������ ���������� ��, �и��Ǿ� �ִ� ���縦 ������ ���Ͽ�
    //           �� ��������� ����Ű�� ���� ����    ��) a 

    return 0;
}
