#include<iostream>
using namespace std;

class Person
{
	char name[20];
	int age;
	static int count; // static ���� ��� ����, ������ ��� ��ü�� ����
public:
	Person(const char* _name, int _age)
	{
		strcpy(name, _name);
		age = _age;
		cout << count++ << " ��° Person ��ü ����" << endl;
	}
	void ShowData()
	{
		cout << "��	��" << name;
		cout << "��	��" << age;
	}
};
int Person::count = 1; // ��������� ����

int main()
{
	Person p1("Kim", 13);
	Person p2("Hong", 22);
	return 0;

}