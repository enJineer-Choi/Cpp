#include <iostream>		// << >>  ��� �Լ� ���·δ� ������ �����ε� ����. 
#include <cmath>
using namespace std;

class Money{
public:
    Money(int pdollars=0, int pcents=0);
    void get_Money() const;
    void set_Money();
    int get_dollars() const;
    int get_cents() const;
    // ������ �����ε�
    friend ostream& operator<<(ostream& a, const Money& m);  //���
    friend istream& operator>>(istream& b, Money& m); //�Է� const��� X
private:
    int dollars;
    int cents;  		 
};

// << ������ �����ε�
ostream& operator<<(ostream& a,const Money& m) //cout �� ostream�� �ϳ��� ��ü
{
    a << "$";
    a << m.dollars;
    a << ".";
    a << m.cents;
    return a;
}
// >> ������ �����ε�
istream& operator>>(istream& b, Money& m) //cin �� istream�� �ϳ��� ��ü , �Է��� �޾ƾ� �ϹǷ� const�� ���̸� �ȵ�
{
    double amount;
    b >> amount;
    m.dollars = static_cast<int>(amount); 
    int cents = static_cast<int>(floor(amount * 100 + 0.5));
    m.cents = cents % 100;
    return b;
}
int main()
{
	Money p1(10, 40), p2(50, 90), p3;
	
	// ���  
    /*p1.get_Money();
    p2.get_Money();*/
    
    // << >> ������ �����ε�
	// ��� ���� $10.40 $50.90
    //cout << p1 << endl;//cout.operator<<(p1); �Ұ��� -> �Ϲ��Լ��� + freind func����
    //cout << p1 << p2;
	// �Է�
    //p3.set_Money();

	// �Է� ���� 30.40
	/*cout << "Enter your money? $" ; 
    cin >> p3;
    cout << p3;
    */
	// �Է�, ��� s
    cout << "Enter your money? $";
    cin >>p1>>p2>> p3;
    cout << p3 <<p2<<p1<< endl;

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
