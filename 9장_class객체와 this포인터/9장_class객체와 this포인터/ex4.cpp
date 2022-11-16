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
	cout << "----- p1의 정보 -----" << endl;
	Person* p1 = new Person();
	cout << "포인터 p1 : " << p1 << endl;
	cout << "p1의 this : " << p1->GetThis() << endl;
	Person* p2 = new Person();
	cout << "포인터 p2 : " << p2 << endl;
	cout << "p2의 this : " << p2->GetThis() << endl;
	
	return 0;
}