#include<iostream>
#include"ex4.h"
using namespace std;

int main()
{
	myclass ob1, ob2;
	ob1.set_a(10);
	ob2.set_a(99);
	cout << ob1.get_a() << endl;
	cout << ob2.get_a() << endl;

	return 0;
}