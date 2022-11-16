#include<iostream>
using namespace std;

int function(int a = 0) // 0이 디폴트 값
{
	return a + 1;
}

int main()
{
	cout << function(11) << endl;
	cout << function() << endl;

	return 0;
}