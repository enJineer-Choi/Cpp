// 10.3 Ŭ����, ������ �� ���� �迭  -> ������, this ������
#include <iostream> 
using namespace std;

class DArray{
    public:
        DArray();   // �⺻ �뷮=50
        DArray(int size);
        int getcp() {return cp;}
        int getused() {return used;}
        void addem(double em) {a[used] = em; used++;}
        double getem(int index) {return a[index];}
         
        // this ������

        // ��� ���� ȣ��

    private:
        double *a;
        int cp;     // �뷮
        int used;   // ��뷮 
};

DArray::DArray(): cp(50), used(0){

}

DArray::DArray(int size): cp(size), used(0){

}

int main(){
    DArray dp1, dp2(10);

    // this ������ 
    
    // ��뵵1:  ��� ������ ����Ͽ� ��� �Լ��� �����ڸ� ȣ���ϴ� ���
    
    // ��뵵2: �Ҵ翬������ �����ε�
    // <�Ҵ翬������ �����ε��� ���� ���> - �⺻ �Ҵ翬���� ��� 
    // ������: ��������(a)�� �ּҰ��� ���� �����Ѵ�. 
    //        ��, dp1.a�� dp2.a�� ���� ���� ����Ų��.
  
    return 0;
}
