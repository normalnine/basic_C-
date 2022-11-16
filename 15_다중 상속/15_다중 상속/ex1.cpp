#include<iostream>
using namespace std;
class AAA
{
public:
	void string()
	{
		cout << "AAA::string" << endl;
	}
};

class BBB
{
public:
	void string()
	{
		cout << "BBB::string" << endl;
	}
};

class CCC : public AAA, public BBB
{
	void showstring()
	{
		string();
		string();
	}
};

int main()
{
	CCC ccc;
	ccc.showstring;
	return 0;
}