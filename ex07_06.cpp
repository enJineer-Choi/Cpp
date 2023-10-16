#include <iostream>  // vector의 사용
#include <vector>
using namespace std;

//vector a,b도 클래스
int main()
{
    vector<int> a; //a의 크기 미정

    //int k;
    //cin >> k;
    //a.push_back(k);
    //cin >> k;
    //a.push_back(k);
    //a.push_back(5);
    //for (unsigned int i = 0; i<a.size(); i++) {//i값이 음수가 되는 걸 방지하기 위해 unsigned
    //    cout << a[i] << " ";
    //}


    vector <int> b(5);//vector b의 크기를 5로 설정
    for (unsigned int i = 0; i < b.size(); i++) {//i값이 음수가 되는 걸 방지하기 위해 unsigned
        cout << b[i] << " ";
    }
    cout << endl;
    b.push_back(11); //5번째칸은 모두 0으로 채워지고 6번째 칸에 11이 채워짐
    b.push_back(12);
    b.push_back(13);
    b[1] = 9;//b의 2번째 값이 9로 변경
    for (unsigned int i = 0; i < b.size(); i++) {//i값이 음수가 되는 걸 방지하기 위해 unsigned
        cout << b[i] << " ";
    }
    cout << endl;
    b.pop_back(); //맨 끝의 값을 버림
    b.resize(15);//배열b의 크기를 15로 변경
    for (unsigned int i = 0; i < b.size(); i++) {//i값이 음수가 되는 걸 방지하기 위해 unsigned
         cout << b[i] << " ";
    }
    return 0;
}
