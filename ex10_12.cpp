/* 10.3 Ŭ����, ������ �� ���� �迭 - �Ҹ���, ���� ������
        ���� �����ڰ� ȣ��Ǵ� 3���� ���
		 1. Ŭ������ ��ü�� ����ǰ� ��ȣ �ȿ��� 
			���� Ÿ���� �ٸ� ��ü�� �ʱ�ȭ�Ǵ� ���
		 2. �Լ��� Ŭ�������� ���� ��ȯ�ϴ� ���
		 3. �Լ��� call-by-value �Ű� ������ �Ѿ�� ���
*/ 
#include <iostream> 
using namespace std;

class DArray{
    public:
        DArray();   // �뷮=50
        DArray(int size);
        // ���� ������ 

        int getcp() {return cp;}
        int getused() {return used;}
        void addem(double em) {a[used] = em; used++;}
        void setem(int index, double em) {a[index]=em;} 
        double getem(int index) {return a[index];}
        // �Ҵ� ������ 
        DArray& operator = (const DArray& rs);
        // �Ҹ��� 

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

DArray& DArray::operator = (const DArray& rs){
    if (this == &rs){
        return *this;
    }
    else {
        cp = rs.cp;
        used = rs.used;
        delete [] a;   // ���� �����迭 a�� ��ȯ�Ѵ�. 
        a = new double[cp];
        for(int i=0; i<used; i++)
            a[i] = rs.a[i];
        return *this;    
    } 
}

// ���� ������ (1)

// ���� ������ (2) (3)

// �Ҹ��� 


int main(){
 
    
    DArray dp1, dp2(10);
        
    // �ʱ�ȭ 
    dp1.addem(2); dp1.addem(3); dp1.addem(4);

	// ���� ������ (1): Ŭ������ ��ü�� ���� Ÿ���� �ٸ� ��ü�� �ʱ�ȭ�Ǵ� ���
    DArray dp3(dp1);
     
    // ���� ������ (2), (3): �Լ��� ���ڿ� ���ϰ� 
    dp2 = fnc(dp1);

    // �򾲸�: ���� ������, �Ҵ翬����, �Ҹ���
    // �������� �ϳ��� �ʿ��ϴٸ� ������ ��θ� �����ؾ� �Ѵ�.
    // ��� ������ �⺻ Ÿ��(int, double ��)�� ������ ����.
    // �׷���, �����ͳ� new�����ڸ� ����ϴ� Ŭ������ �򾲸���
    // �ݵ�� �����ؾ� �Ѵ�.
     
    return 0;
}
