// 10.2 동적 배열 - 숫자 리스트 검색 
#include <iostream> 
using namespace std;

int main()
{
    // 배열 크기 입력 및 할당 
    cout << "Size of array= ?";
    int asize;
    cin >> asize;

    int* pa;
    pa = new int[asize];

    // 배열 채우기
    for (int i = 0; i < asize; i++)
    {
        cin >> pa[i];
    }
    // 배열 검색    
    cout << "Target= ?";
    int tg;
    cin >> tg;

    int index = -1;
    for (int i = 0; i < asize; i++)
    {
        if (tg == pa[i]) index = i;
    }
    // 결과 출력 
    if (index == -1)
        cout << "Your target is not here.\n";
    else
        cout << "Your target is in " << index << "." << endl;
        
    // 배열 삭제    
    delete []pa;    //배열인 pa를 반납한다는 의미

    return 0;
}
