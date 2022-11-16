#include<iostream>
using namespace std;

class Person
{	
	char* name;
	char* phone;
	int age;
public:
	Person(const char* name, const char* phone, int age);
	void ShowData();
	~Person();
};
Person::Person(const char* _name, const char* _phone, int _age)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);

	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);

	age = _age;
}
void Person::ShowData()
{
	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}
Person::~Person()
{
	delete[]name;
	delete[]phone;
}

int main()
{
	Person p1("KIM", "010-333-5555", 22);
	Person p2(p1);
	p1.ShowData();
	p2.ShowData();
	return 0;
}