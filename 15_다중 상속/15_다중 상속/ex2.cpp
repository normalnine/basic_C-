#include<iostream>
using namespace std;
class AAA
{
public:
	void string1()
	{
		cout << "AAA::string" << endl;
	}
};

class BBB : virtual public AAA
{
public:
	void string2()
	{
		cout << "BBB::string" << endl;
	}
};

class CCC : virtual public AAA
{
	void string3()
	{
		cout << "BBB::string" << endl;
	}
};
class DDD : public BBB, public CCC
{
public:
	void showstring()
	{
		string1();
		string2();
		string3();
	}
};

int main()
{
	CCC ccc;
	ccc.showstring;
	return 0;
}