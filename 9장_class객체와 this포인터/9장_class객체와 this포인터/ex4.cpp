#include<iostream>
using namespace std;

class Person
{
public:
	Person* GetThis()
	{
		return this;
	}
};

int main()
{
	cout << "----- p1�� ���� -----" << endl;
	Person* p1 = new Person();
	cout << "������ p1 : " << p1 << endl;
	cout << "p1�� this : " << p1->GetThis() << endl;
	Person* p2 = new Person();
	cout << "������ p2 : " << p2 << endl;
	cout << "p2�� this : " << p2->GetThis() << endl;
	
	return 0;
}