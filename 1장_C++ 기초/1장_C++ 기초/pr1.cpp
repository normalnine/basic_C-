#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << i+1<<"번째 정수 입력 : ";
		cin >> a[i];
		sum += a[i];
	}

	cout << "합계는 " << sum << "입니다" << endl;

	return 0;
}