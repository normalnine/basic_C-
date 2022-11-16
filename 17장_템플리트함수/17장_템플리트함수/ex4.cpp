#include<iostream>
using namespace std;

template <typename T>
int SizeOf(T a)
{
	return sizeof(a);
}
template <>
int SizeOf(char* a)
{
	return sizeof(a);
}
int main()
{
	int i = 10;
	double e = 7.7;
	char* str = "Good Morning";
		
	cout << sizeof(i) << endl;					// (���) 4
	cout << sizeof(e) << endl;					// (���) 8
	cout << sizeof(str) << endl;				// (���) 4
	cout << strlen(str) << endl;				// (���) 12 <--- ���ڿ��� ����
	cout << sizeof("Good Morning") << endl;		// (���) 13 <--- ���ڿ��� ũ��(�뷮), �ι��� ����

	cout << SizeOf(i) << endl;					// (���) 4
	cout << SizeOf(e) << endl;					// (���) 8
	cout << SizeOf(str) << endl;				// (���) 4
	cout << SizeOf("Good Morning") << endl;		// (���) 4
	
	return 0;
}