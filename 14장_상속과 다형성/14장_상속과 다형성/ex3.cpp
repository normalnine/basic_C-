/*
Base class(Base &)��
Base ��ü �Ӹ� �ƴ϶�
Base class(�θ�Ŭ����)�� ����ϴ� Derived class(�ڽ�Ŭ����) ��ü�� ���� �����ϴ�.
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