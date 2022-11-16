#include <iostream>
using namespace std;

const int SIZE = 20;
class Person
{
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	void showdata();
	void setdata(const char*, const char*, int);
};

void Person::showdata()
{
	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;	
}
void Person::setdata(const char* _name, const char* _phone, int _age)
{
	strcpy(name, _name);
	strcpy(phone, _phone);
	age = _age;
}
int main()
{
	Person p;
	p.setdata("KIM", "013-113-1113", 22);
	p.showdata();
	return 0;
}