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
		cout << "��	�� : " << GetName() << endl;
		cout << "��	�� : " << GetAge() << endl;
		cout << "��	�� : " << GetSubject() << endl;
	}
};

int main()
{
	Student Kim(20,"Kim", "Computer");	// �ڽ� ��ü--���ÿ�-->������(�Ű��ڽ�header->�Ű��θ�->�Ű��ڽ�body) �ڵ�ȣ��
	Kim.ShowData();	
	return 0;
}