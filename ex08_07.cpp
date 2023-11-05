#include <iostream>		// ���� ������(++,--), ��� �Լ��� �����ε� 
using namespace std;

class Money{
public:
    Money(int pdollars=0, int pcents=0);
    void get_Money() const;
    void set_Money();
    int get_dollars() const;
    int get_cents() const;
	// ����/���� ������ �����ε�  
    Money operator++(); //���� ����
    Money operator++(int); //���� ���� -> ���� ���� �����ڿ� �������ֱ� ���� ���Ƿ� ��ü���� ������
    //Money operator()++  �Ұ���
private:
    int dollars;
    int cents;  		 
};

// ���� ������ �����ε�
Money Money::operator++()
{
    dollars++;
    cents++;
    return Money(dollars, cents);

}

// ���� ������ �����ε�
Money Money::operator++(int nouse) //�ӽ� ������ ������Ѽ� ���� ��Ų�� ���� ���Ͻ�Ű�� ����
{
    int tpdollars = dollars; 
    int tpcents = cents;
    dollars++;  //ȣ�� ��ü�� �� ����
    cents++;    //ȣ�� ��ü�� �� ����
    return Money(tpdollars, tpcents);   //�����Ǳ� ���� ���� ����

}

int main()
{
	Money p1(10, 40), p2(20, 60), p3;
	
    // ������ �����ε�
    //cout << "���� ����" << endl;
    //p3 = ++p1;  //p3=p1.operator++();
    ////++p1; //p1.operator++();
    //cout << "p1= " << endl;
    //p1.get_Money();
    //cout << "p3= " << endl;
    //p3.get_Money();
    //++p2;
    //cout << "p2= " << endl;
    //p2.get_Money();

    cout << "���� ����" << endl;
    p3 = p1++;  //p3.++operator();�Ұ��� �����Ϸ��� �ν� ����-> operator++() �̷��� �����ۿ�����.
    cout << "p1=" << endl;
    p1.get_Money();
    cout << "p3= " << endl;
    p3.get_Money();
    p2++;
    cout << "p2= " << endl;
    p2.get_Money();

    return 0;
}

// Money ������
Money::Money(int pdollars, int pcents) : dollars(pdollars), cents(pcents) {
}

void Money::set_Money(){
    cout << "dollars & cents=? "; cin >> dollars >> cents; 
}

void Money::get_Money() const {
    cout << "dollars & cents= " << dollars << " " << cents << endl; 
}

int Money::get_dollars() const{
    return dollars;
}
int Money::get_cents() const{
    return cents;
}
