// 10.2 ���� �迭 - ���� ����Ʈ �˻� 
#include <iostream> 
using namespace std;

int main()
{
    // �迭 ũ�� �Է� �� �Ҵ� 
    cout << "Size of array= ?";
    int asize;
    cin >> asize;

    int* pa;
    pa = new int[asize];

    // �迭 ä���
    for (int i = 0; i < asize; i++)
    {
        cin >> pa[i];
    }
    // �迭 �˻�    
    cout << "Target= ?";
    int tg;
    cin >> tg;

    int index = -1;
    for (int i = 0; i < asize; i++)
    {
        if (tg == pa[i]) index = i;
    }
    // ��� ��� 
    if (index == -1)
        cout << "Your target is not here.\n";
    else
        cout << "Your target is in " << index << "." << endl;
        
    // �迭 ����    
    delete []pa;    //�迭�� pa�� �ݳ��Ѵٴ� �ǹ�

    return 0;
}
