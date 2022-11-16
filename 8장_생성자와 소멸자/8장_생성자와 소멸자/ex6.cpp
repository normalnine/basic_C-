#include<iostream>
using namespace std;

const int SIZE = 20;
class Person
{
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	Person(const char* _name, const char* _phone, int _age);
	void showdata();
};

Person::Person(const char* _name, const char* _phone, int _age)
{
	strcpy(name, _name);
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