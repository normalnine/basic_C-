#include<iostream>
using namespace std;

class AAA
{
public:
	static int n;
};
int AAA::n = 1;

int main()
{
	cout << AAA::n << endl;
	AAA::n++;
	cout << AAA::n << endl;
	return 0;
}