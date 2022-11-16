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
	Student(int _age, const char* _name, const char* _subject) : Person(_age, _name)
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
	Student Kim(20,"Kim", "Computer");	// 자식 객체--동시에-->생성자(매개자식header->매개부모->매개자식body) 자동호출
	Kim.ShowData();	
	return 0;
}