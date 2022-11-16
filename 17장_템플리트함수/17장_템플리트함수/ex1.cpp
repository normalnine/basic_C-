#include<iostream>
using namespace std;



//	함수 템플리트
template < typename T >
T add(T a, T b)
{
	return a + b;
}


int main(void)
{
	cout << add(10, 20) << endl;
	cout << add(1.1, 2.2) << endl;
}