// 10.1 ������ - ���� ���� 
#include <iostream> 
using namespace std;

int main()
{
    // new ������
    int* p1;
    p1 = new int;   //������ �������� 
    *p1 = 7;
    //p1 = new int(7);    //9,10 line�� ���ÿ� 
    cout << *p1 << endl;
    
    // NULL ������ 
    //p1 = NULL;
    //cout << p1 << endl; //cout<<*p1<<end; -> ���� �߻� why?? ����Ű�� ���� ���

    // delete ������
    
     
    // ��� ������
    int* p2;
    p2 = p1;
    delete p1;  //p2�� p1�� ���� ���� ����Ű�� �ִµ� p1�� �ݳ��ϸ鼭 p2�� ����Ű�� ���� �����
    p2 = NULL;  //���� p2�� ��������ͷ� �����ؼ� ����Ű�� ���� ������ �������.
    cout << p2 << endl; //*p2 ���� �Ұ����� �� (compiler���� �ٸ�)

    return 0;
}
