/* 14.2 ����� �̿��� ���α׷���
        10���� �κ������� ����� �迭 ��� 
        ���� ������ ������ Ŭ������ ���
        - �Ļ� Ŭ������ ���� ������: ��� Ŭ������ ���� ������ ȣ�� 
        - �Ļ� Ŭ������ �Ҵ� ������: ��� Ŭ������ �Ҵ� ������ ȣ��
        - �Ļ� Ŭ������ �Ҹ���: ��� Ŭ������ �Ҹ��� �ڵ� ȣ�� 
*/ 
#include <iostream> 
using namespace std;

//--- �⺻ Ŭ���� DArray �������̽� 
class DArray{
    public:
        DArray();   // �뷮=50
        DArray(int size);
        DArray(const DArray& tg);  // ���� ������ 

        int getcp() {return cp;}
        int getused() {return used;}
        void addem(double em) {a[used] = em; used++;}
        double getem(int index) {return a[index];}
        void initial();  // �迭 �ʱ�ȭ 
        DArray& operator = (const DArray& rs);  // �Ҵ� ������ 
        ~DArray();
        // private ��� 
        double *a;
        int cp;     // �뷮
        int used;   // ��뷮 
};

//--- �Ļ�Ŭ���� DArrayBack �������̽� 
class DArrayBack : // ���
public:
    // ������ 
    DArrayBack();   // �뷮=50
    DArrayBack(int cpb);
    // ���� ������ 

    void backup();  // ��� 
    void restore();  // ���� 
    // �Ҵ� ������ 
    // �Ҹ���
private:
    double *b; // ��� �迭 
    int usedB; // ��� �迭�� ��뷮 
};

//--- �Ļ�Ŭ���� DArrayBack ���� 
DArrayBack::DArrayBack() : DArray(), usedB(0) {
    b = new double[cp];
}

DArrayBack::DArrayBack(int cpb) : DArray(cpb), usedB(0) {
    b = new double[cp];
}
// ���� ������: ��� Ŭ������ ���� ������ ȣ�� 


void DArrayBack::backup() {
    usedB = used;
    for (int i = 0; i < usedB; i++)
        b[i] = a[i];
}

void DArrayBack::restore() {
    used = usedB;
    for (int i = 0; i < used; i++)
        a[i] = b[i];
}

// �Ҵ� ������ �����ε� 


// �Ļ� Ŭ������ �Ҹ��ڴ� ��� Ŭ������ �Ҹ��ڸ� �ڵ� ȣ���Ѵ�.
// �Ҹ��� ȣ�� ������ ������ ȣ�� ������ ����

int main(){
    
    DArrayBack db1, db2(10);
    
    // ���, ���� 
    db1.addem(2); db1.addem(3); db1.addem(4); db1.addem(5);
    db1.backup();   // ��� 
    db1.initial();  // �ʱ�ȭ 
    cout << "db1.a= " << db1.getem(0) << " " << db1.getem(1) << " "
                      << db1.getem(2) << " " << db1.getem(3) << endl;
    db1.restore();  // ���� 
    cout << "db1.a= " << db1.getem(0) << " " << db1.getem(1) << " "
                      << db1.getem(2) << " " << db1.getem(3) << endl;
 
    // ���� ������ 
    DArrayBack db3(db1);
    cout << "db3.a= " << db3.getem(0) << " " << db3.getem(1) << " "
                      << db3.getem(2) << " " << db3.getem(3) << endl;

    // �Ҵ� ������(=)
    db2 = db3;
    cout << "db2.cp=" << db2.getcp() << " db2.used=" << db2.getused() << endl;
    cout << "db2.a= " << db2.getem(0) << " " << db2.getem(1) << " "
                      << db2.getem(2) << " " << db2.getem(3) << endl;
                                  
    return 0;
}

//--- �⺻ Ŭ���� DArray ���� 
DArray::DArray(): cp(50), used(0){
    a = new double[cp];
}
DArray::DArray(int size): cp(size), used(0){
    a = new double[cp];
}
// ���� ������ 
DArray::DArray(const DArray& tg): cp(tg.cp), used(tg.used){
        a = new double[cp];
        for(int i=0; i<used; i++)
            a[i] = tg.a[i];
}
// �Ҵ翬����(=) �����ε� 
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
void DArray::initial(){
        for(int i=0; i<used; i++)
            a[i] = 0.0;
       used = 0;
}
// �Ҹ��� 
DArray::~DArray(){
    delete [] a;
}
