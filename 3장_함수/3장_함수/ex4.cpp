#include<iostream>
using namespace std;

int function(int a = 0) // 0이 디폴트 값
{
	return a + 1;
}
int function(void)
{
	return 10;
}

int main()
{
	cout << function(10) << endl;
	return 0;
}