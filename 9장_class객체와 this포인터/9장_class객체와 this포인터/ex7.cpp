#include<iostream>
using namespace std;

class Data
{
	int aaa;
	int bbb;
public:
	Data(int aaa, int bbb)
	{
		this->aaa = aaa;
		this->bbb = bbb;
	}
	void printAll()
	{
		cout << aaa << " " << bbb << endl;
	}
};

int main()
{
	Data d(100, 200);
	d.printAll();
	return 0;
}