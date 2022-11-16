#include<iostream>
using namespace std;

void swap(int* p1, int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void swap(char* p1, char* p2)
{
	char temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void swap(double* p1, double* p2)
{
	double temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'a', ch2 = 'z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double db11 = 1.111, db12 = 5.555;
	swap(&db11, &db12);
	cout << db11 << ' ' << db12 << endl;

	return 0;
}

