//swap : call by reference(레퍼런스에 의한 전달)
#include<iostream>
using namespace std;

void swap(int& a, int& b) //int& a = va1, int& b = va2
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int val1 = 10;
	int val2 = 20;

	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;

	swap(val1, val2);
	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;

	return 0;
}