#include <iostream>		// 전위/후위 증감 연산자 
using namespace std;

int main()
{
    int a = 7, b;
    cout << "b = a++;" << endl;
    b = a++;    //b=a. a=a+1
    cout << "a= " << a << "b= "<<b<<endl;
    int c = 7, d;
    cout << "d = ++c;" << endl;
    d = ++c;    //c=c+1 , d=c
    cout << "c= " << c << "d= " << d << endl;
    return 0;
}
