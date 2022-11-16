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
		
	cout << sizeof(i) << endl;					// (결과) 4
	cout << sizeof(e) << endl;					// (결과) 8
	cout << sizeof(str) << endl;				// (결과) 4
	cout << strlen(str) << endl;				// (결과) 12 <--- 문자열의 길이
	cout << sizeof("Good Morning") << endl;		// (결과) 13 <--- 문자열의 크기(용량), 널문자 포함

	cout << SizeOf(i) << endl;					// (결과) 4
	cout << SizeOf(e) << endl;					// (결과) 8
	cout << SizeOf(str) << endl;				// (결과) 4
	cout << SizeOf("Good Morning") << endl;		// (결과) 4
	
	return 0;
}