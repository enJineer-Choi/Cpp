// 10.2 ���� �迭 - �迭 ������ �����ͺ���
#include <iostream> 
using namespace std;

int main()
{
    // �迭 ����(�迭��)
    char a[4]={'a', 'b', 'c','d'};
    char *cp;
    
    // ������ ��� 
    cp = a; //a=cp; ���� a�� ������ ���
    // ���ȣ ->�迭�϶� ��밡��
    cout << a[0] << cp[1] << endl;

    // �������� ������� 
    cout << *cp << *(cp + 1) << endl;
    return 0;
}
