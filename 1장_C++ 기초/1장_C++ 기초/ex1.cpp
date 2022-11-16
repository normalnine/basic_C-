#include<iostream>
using namespace std;
int main()
{
	int value1, value2;
	int result = 0;

	cout << "두 개의 숫자 입력";
	cin >> value1 >> value2;

	if (value1 < value2)
	{
		for (int i = value1 + 1; i<value2 + 1; i++)
		{
			result += i;
		}
	}
	else
	{
		for (int i = value2 + 1; i < value1 + 1; i++)
		{
			result += i;
		}
	}
	cout << "두 수 사이에 존재하는 정수의 합 : "<<result << endl;
	return 0;
}