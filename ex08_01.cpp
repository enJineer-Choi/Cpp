#include <iostream>	// ������ �����ε�: �Ϲ�(����) �Լ�����
using namespace std;

class Money{
public:
    Money(int pdollars=0, int pcents=0); //Money�� ������
    void get_Money() const;
    void set_Money();
	
    Money set_return();// set and return

    int get_dollars() const;
    int get_cents() const;

private:
    int dollars;
    int cents;  		 
};

// �Ϲ�(����) �Լ� ������ �����ε� 
//Money operator+(Money a,Money b) //1.call-by-value
//Money operator+(Money &a, Money &b) //2.call-by-reference ->ȿ������ ����
//Money operator+(const Money& a, const Money& b) //3.������� ���� ���� by const���
const Money operator+(const Money& a, const Money& b) //4.const�� ���� return�� ���� ����
{ 
    int allcents = a.get_cents() + b.get_cents();
    int finalcents = allcents % 100;
    int finaldollars = a.get_dollars() + b.get_dollars() + (allcents / 100);
    //a.set_return(); //2. ������������ �߸��� ��� -��� ���� ���� �õ� & ���� (a�� ���� �����)
    
    return Money(finaldollars, finalcents);
}

int main()
{
    Money p1(10, 40), p2(20,70), p3;
	
    // �Է�
    //p2.set_Money();
    // ������ �����ε�
    p3 = p1;    //�Ҵ� �����ڴ� �ڵ����� �����ε���.
    p3 = p1 + p2;//->���� ���� :  p3 = operator+(p1, p2) & operator + : ���鿡 ����� ����
    // const ���� ���� ���� 
    (p1 + p2).get_Money();  //return ���� ���氡���� ����
    //(p1 + p2).set_Money();  //return ���� ���氡���� ����

    // ��ȯ ��Ģ ���� 
    p3 = p2 + p1;
    p3 = p1 + 10; //��ȯ��Ģ ���� : 10->Money ������ ����ȯ�Ǿ ���� ����

    // ���
	cout << "p1: "; p1.get_Money(); cout << endl;
	cout << "p2: "; p2.get_Money(); cout << endl;
	cout << "p3: "; p3.get_Money(); cout << endl;

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

Money Money::set_return() {
    cout << "dollars & cents=? ";
    cin >> dollars >> cents;
    return Money(dollars, cents);
}