#include<iostream>
using namespace std;

struct struct_person
{
	int age;
	char name[20];
	char personID[20];
}; typedef struct_person person;

void showdata(person p)
{
	cout << "****** ���� ���� ��� ******" << endl;
	cout << "��	�� : " << p.name << endl;
	cout << "�ֹι�ȣ : " << p.personID << endl;
	cout << "��	�� : " << p.age << endl;
}
int main()
{
	person man;

	cout << "��	�� : ";
	cin >> man.name;
	cout << "�ֹι�ȣ : ";
	cin >> man.personID;
	cout << "��	�� : ";
	cin >> man.age;

	showdata(man);

	return 0;
}