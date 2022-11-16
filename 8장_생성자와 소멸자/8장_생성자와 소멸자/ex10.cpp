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
	void DelMemory();
};

Person::Person(const char* _name, const char* _phone, int _age)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);
	age = _age;
}

void Person::showdata()
{
	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}

void Person::DelMemory()
{
	delete[]name;
	delete[]phone;
}

int main()
{
	Person p("KIM", "013-113-1113", 22);
	p.showdata();
	p.DelMemory();
	return 0;
}