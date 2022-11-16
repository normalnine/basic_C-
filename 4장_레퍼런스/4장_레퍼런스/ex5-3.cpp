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
	cout << "****** 개인 정보 출력 ******" << endl;
	cout << "이	름 : " << p.name << endl;
	cout << "주민번호 : " << p.personID << endl;
	cout << "나	이 : " << p.age << endl;
}
int main()
{
	person man;

	cout << "이	름 : ";
	cin >> man.name;
	cout << "주민번호 : ";
	cin >> man.personID;
	cout << "나	이 : ";
	cin >> man.age;

	showdata(man);

	return 0;
}