#include <iostream>  // vector�� ���
#include <vector>
using namespace std;

//vector a,b�� Ŭ����
int main()
{
    vector<int> a; //a�� ũ�� ����

    //int k;
    //cin >> k;
    //a.push_back(k);
    //cin >> k;
    //a.push_back(k);
    //a.push_back(5);
    //for (unsigned int i = 0; i<a.size(); i++) {//i���� ������ �Ǵ� �� �����ϱ� ���� unsigned
    //    cout << a[i] << " ";
    //}


    vector <int> b(5);//vector b�� ũ�⸦ 5�� ����
    for (unsigned int i = 0; i < b.size(); i++) {//i���� ������ �Ǵ� �� �����ϱ� ���� unsigned
        cout << b[i] << " ";
    }
    cout << endl;
    b.push_back(11); //5��°ĭ�� ��� 0���� ä������ 6��° ĭ�� 11�� ä����
    b.push_back(12);
    b.push_back(13);
    b[1] = 9;//b�� 2��° ���� 9�� ����
    for (unsigned int i = 0; i < b.size(); i++) {//i���� ������ �Ǵ� �� �����ϱ� ���� unsigned
        cout << b[i] << " ";
    }
    cout << endl;
    b.pop_back(); //�� ���� ���� ����
    b.resize(15);//�迭b�� ũ�⸦ 15�� ����
    for (unsigned int i = 0; i < b.size(); i++) {//i���� ������ �Ǵ� �� �����ϱ� ���� unsigned
         cout << b[i] << " ";
    }
    return 0;
}
