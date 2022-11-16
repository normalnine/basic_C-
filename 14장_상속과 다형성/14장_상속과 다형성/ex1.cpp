#include<iostream>
using namespace std;
class Person
{
public:
	void sleep()
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
	Person*			p1 = new Person;
	Student*		p2 = new Student;
	PartTimeStd*	p3 = new PartTimeStd;

	p1->sleep();

	p2->sleep();
	p2->Study();

	p3->sleep();
	p3->Study();
	p3->Work();

	delete p1;
	delete p2;
	delete p3;

}