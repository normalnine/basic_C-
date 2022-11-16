#include<iostream>
using namespace std;

bool IsPositive(int i)
{
	if (i < 0)
		return false;
	else
		return true;
}

int main()
{
	int number;
	bool result;

	cout << "숫자 입력 : ";
	cin >> number;

	result = IsPositive(number);
	if (result == true)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;
	return 0;
}