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
		cout << "��	�� : " << GetName() << endl;
		cout << "��	�� : " << GetAge() << endl;
		cout << "��	�� : " << GetSubject() << endl;
	}
};

int main()
{
	Student Kim("Computer");	// �ڽ�Ŭ���� ��ü ������, �θ������,�ڽĻ����� �ڵ�ȣ��
	Kim.ShowData();
	return 0;
}
/*
==�Ļ�(�ڽ�)��ü==
�Ļ�(�ڽ�) ��ü ����
1. �⺻(�θ�) ������ �ڵ�ȣ��
2. �Ļ�(�ڽ�) ������ �ڵ�ȣ��

�Ļ���ü.�������()
3.�Ļ�(�ڽ�) �Ҹ��� �ڵ�ȣ��
4.�⺻(�θ�) �Ҹ��� �ڵ�ȣ��

�Ļ�(�ڽ�)��ü �Ҹ�
*/