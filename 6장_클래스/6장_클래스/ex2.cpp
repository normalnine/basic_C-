#include<iostream>
using namespace std;

class myclass
{
private:
	int a;
public:
	void set_a(int num);
	int get_a();
};

void myclass::set_a(int num)
{
	a = num;
}

int myclass::get_a()
{
	return a;
}

int main()
{
	myclass m1;
	m1.set_a(10);
	cout << m1.get_a();

}