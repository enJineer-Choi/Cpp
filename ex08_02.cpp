#include <iostream>	// ������ �����ε�: ��� �Լ��� �����ε� 
using namespace std;

class Money {
public:
    Money(int pdollars = 0, int pcents = 0);
    void get_Money() const;
    void set_Money();
    Money set_return(); // set and return
    int get_dollars() const;
    int get_cents() const;
    // ��� �Լ��� ������ �����ε�
    //Money operator+(Money b) // 1.(call-by-value) 
    //Money operator+(const Money &b) // 2.(call-by-reference) ȿ������ b�� ������� ���� ����
    //const Money operator+(const Money & b) // 3. return���� ������� ���� ����
    const Money operator+(const Money &b) const// 4. �ڽ��� ������� �������
    {
        //dollars = 0; //�ڽ��� ��������� �����ϴ� ����-> �ذ���? 4�� 
        int allcents = cents + b.get_cents(); //cents-> p1�� cents
        int finalcents = allcents % 100;
        int finaldollars = dollars + b.get_dollars() + (allcents / 100);
        return Money(finaldollars, finalcents);
    }
private:
    int dollars;
    int cents;  		 
};

int main()
{
    Money p1(10, 40), p2(20, 70), p3;
	
    // ������ �����ε�
    p3 = p1 + p2; //p3 = p1.operator+(p2); //������ �������.
    p3 = p2 + p1;//p3=p2.operator+(p1);
    // const�� ���� ���ϰ��� ���� ����
    //p3 = (p1 + p2).set_return(); //Money operator+(const Money &b) ->const�� ������������ �ұ��ϰ� p3���� ������ ����.
    // ��ȯ ��Ģ ���� ����
    //p3 = p2 + 10;
    //p3 = 10 + p2;
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
    cout << "dollars & cents=? "; cin >> dollars >> cents;
	return Money(dollars, cents);
}