#include<iostream>
using namespace std;
int main()
{
	int value1, value2;
	int result = 0;

	cout << "�� ���� ���� �Է�";
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
	cout << "�� �� ���̿� �����ϴ� ������ �� : "<<result << endl;
	return 0;
}