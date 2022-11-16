#include<stdio.h>
struct Person
{
	int age;
	char name[10];
};
typedef struct Person Person;

int main()
{
	int a = 10;
	Person p;	// 구조체 변수 선언문
	return 0;
}