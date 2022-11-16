#include<iostream>
using namespace std;

class Person
{
	char* name;
	char* phone;
	int age;
public:
	Person(const char* _name, const char* _phone, int _age);
	void showdata();
};

Person::Person(const char* _name, const char* _phone, int _age)
{
	// new �ڷ���[ũ��] �޸� �����Ҵ�
	name = new char[strlen(_name) + 1];		// new char[3+1]
	strcpy(name, _name);
	phone = new char[strlen(_phone) + 1];	// new char[12+1]
	strcpy(phone, _phone);
	age = _age;
}

void Person::showdata()
{
	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}

int main()
{
	Person p("KIM", "013-113-1113", 22);

	p.showdata();
	return 0;
}