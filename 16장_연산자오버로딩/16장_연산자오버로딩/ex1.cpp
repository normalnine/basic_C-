#include<iostream>
using namespace std;

class Num
{
	int su;
public:
	Num(int a = 0) :su(a) {}
	void Set(int a) { su = a; }
	void Disp() { cout << "su=" << endl; }
	friend int operator+(Num&, Num&);
	friend int operator+(Num&, int);
	friend int operator+(int, Num&);
};

int operator+ (Num& K1, Num& K2)
{
	return (K1.su + K1.su);
}

int operator+ (Num& K1, int a)
{
	return (K1.su + a);
}

int operator+ (int a, Num& K1)
{
	return (a+K1.su);
}

int main()
{
	Num Kim(20), Lee(10);
	int a;			// a = Kim.operator+(2, Kim.su) <-외부접근불가    --->a = Kim.operator+(2, Kim)
	a = 2 + Kim;	// a = 2 + Kim.su <- 외부접근 불가
	cout << "a = " << a << endl;
	a = Kim + Lee;
	cout << "a = " << a << endl;
	return 0;
}