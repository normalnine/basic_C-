#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << i+1<<"��° ���� �Է� : ";
		cin >> a[i];
		sum += a[i];
	}

	cout << "�հ�� " << sum << "�Դϴ�" << endl;

	return 0;
}