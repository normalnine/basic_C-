#include<iostream>
using namespace std;

int function(int a = 0) // 0�� ����Ʈ ��
{
	return a + 1;
}

int main()
{
	cout << function(11) << endl;
	cout << function() << endl;

	return 0;
}