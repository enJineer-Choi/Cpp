#include <iostream>	// ������ �Լ��� ��ȯ 
using namespace std;

//int sf(int m){ // call by value ,return =9, rb=7  

//int sf(int& m) { // call by reference ,return =9, rb=9
int& sf(int& m) { // ���� ���� ,return =9, rb=11
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
    //cout << rb << endl; //call-by-value ���� �ٲ��� ���� return 7

    // ���� ����
    sf(rb) = 11; //sf���� return �Ǵ� ���� 11�� ����
    cout << rb << endl; //rb=11
    cout << sf(rb) << endl; //���� 9
    return 0;
}
