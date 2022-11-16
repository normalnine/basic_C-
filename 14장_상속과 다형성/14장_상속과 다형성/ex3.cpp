/*
Base class(Base &)는
Base 객체 뿐만 아니라
Base class(부모클래스)를 상속하는 Derived class(자식클래스) 객체도 참조 가능하다.
*/

#include<iostream>
using namespace std;
class Person
{
public:
	void Sleep()
	{
		cout << "Sleep" << endl;
	}
};

class Student : public Person
{
public:
	void Study()
	{
		cout << "Study" << endl;
	}
};

class PartTimeStd :public Student
{
public:
	void Work()
	{
		cout << "Work" << endl;
	}
};

void main(void)
{
	Person			p1;
	Student			p2;
	PartTimeStd		p3;

	Person&			ref1 = p1;
	Student&		ref2 = p2;
	PartTimeStd&	ref3 = p3;

	p1.Sleep();
	ref1.Sleep();

	p2.Sleep();
	ref2.Sleep();

	p3.Sleep();
	ref3.Sleep();

	Person& ref4 = p3;
	Student& ref5 = p3;
	p3.Sleep();
	p3.Study();
	p3.Work();
	ref4.Sleep();
	ref5.Sleep();
	ref5.Study();
}