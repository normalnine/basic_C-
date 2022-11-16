#include<iostream>
using namespace std;

template<typename X> void swap1(X& a, X& b)
{
	X temp;
	temp = a;
	b = temp;
	cout << "function template" << endl;
}
template <> void swap1(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "explicit specialization" << endl;
}
int main()
{
	int i = 10, j = 20;
	float x = 10.1, y = 23.3;
	char a = 'x', b = 'z';

	cout << "Original i, j : " << i << " " << j << endl;
	cout << "Original x, y : " << x << " " << y << endl;
	cout << "Original a, b : " << a << " " << b << endl;

	swap1(i, j);
	swap1(x, y);
	swap1(a, b);


	cout << "Swapped i, j : " << i << " " << j << endl;
	cout << "Swapped x, y : " << x << " " << y << endl;
	cout << "Swapped a, b : " << a << " " << b << endl;

}