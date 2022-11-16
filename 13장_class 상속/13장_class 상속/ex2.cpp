#include<iostream>
using namespace std;

class Person
{
	int age;
	char name[20];
public:
	int GetAge() const
	{
		return age;
	}
	const char* GetName() const
	{

		return name;
	}
	Person(int _age = 1, const char* _name = "noname")
	{
		age = _age;
		strcpy(name, _name);
	}
};
class Student : public Person
{
	char subject[20];
public:
	Student(const char* _subject)
	{
		strcpy(subject, _subject);
	}
	const char* GetSubject() const
	{
		return subject;
	}
	void ShowData() const
	{
		cout << "이	름 : " << GetName() << endl;
		cout << "나	이 : " << GetAge() << endl;
		cout << "전	공 : " << GetSubject() << endl;
	}
};

int main()
{
	Student Kim("Computer");	// 자식클래스 객체 생성시, 부모생성자,자식생성자 자동호출
	Kim.ShowData();
	return 0;
}
/*
==파생(자식)객체==
파생(자식) 객체 생성
1. 기본(부모) 생성자 자동호출
2. 파생(자식) 생성자 자동호출

파생객체.멤버참조()
3.파생(자식) 소멸자 자동호출
4.기본(부모) 소멸자 자동호출

파생(자식)객체 소멸
*/