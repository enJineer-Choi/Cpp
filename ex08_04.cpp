#include <iostream>	// 참조와 함수의 반환 
using namespace std;

//int sf(int m){ // call by value ,return =9, rb=7  

//int sf(int& m) { // call by reference ,return =9, rb=9
int& sf(int& m) { // 참조 리턴 ,return =9, rb=11
    m = 9;
    return m;
}

int main()
{
    int rb = 7;
    int& bob = rb; //int &bob = rb;
    
    cout << rb << " " << bob << endl;  
    cout << &rb << " " << &bob << endl; 
    // call by value, call by reference
    //cout << sf(rb) << endl; //return 9
    //cout << rb << endl; //call-by-value 값이 바뀌지 않음 return 7

    // 참조 리턴
    sf(rb) = 11; //sf에서 return 되는 값을 11로 변경
    cout << rb << endl; //rb=11
    cout << sf(rb) << endl; //리턴 9
    return 0;
}
