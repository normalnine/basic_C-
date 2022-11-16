#include<iostream>
using namespace std;

class Person
{
	char name[20];
	int age;
	static int count; // static 정적 멤버 선언, 생성된 모든 객체가 공유
public:
	Person(const char* _name, int _age)
	{
		strcpy(name, _name);
		age = _age;
		cout << count++ << " 번째 Person 객체 생성" << endl;
	}
	void ShowData()
	{
		cout << "이	름" << name;
		cout << "나	이" << age;
	}
};
int Person::count = 1; // 정적멤버의 정의

int main()
{
	Person p1("Kim", 13);
	Person p2("Hong", 22);
	return 0;

}