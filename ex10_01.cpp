// 10.1 ������
#include <iostream> 
using namespace std;

int main()
{
    // ������ ������ ����
    //double *d1, d2;
    //int *p1, *p2;   //int* p1,p2; ->pointer�� ���� p1,p2�� ���ÿ� ��ٴ� �ǹ�
    ////int* p1, * p2; -> ��Ȯ�Ǽ� ����
     
    // typedef
    //typedef int* IntPtr;    //int*�� IntPtr�� �ٽ� ����
    //IntPtr p1, p2;  //int* p1,p2�� ������ ����
    // &�� *
    int* p1, v1;
    p1 = &v1;
    *p1 = 3;
    cout << v1 << endl;
    v1 = 7;
    cout << *p1 << endl;

    // ������ ����
    int *p2, v2;
    p2 = &v2;
    //p2 = p1 + p2;   //����
    //p2 = p2 + 1;    //��Ȯ���� �� ��� �׷��� �迭������ �ǹ̰� ����(p2�� ����Ű�� �ּ��� 1ĭ ���� ���� p2�� �Ҵ�)
    p2 = p1;    //�Ҵ翬����, *p2=*p1;-> ����Ű��  ���� �ǹ� ����
    cout << *p2 << endl;
    return 0;
}
