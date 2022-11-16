#include<iostream>
using namespace std;

void function(void)
{
	cout << "function(void) call" << endl;
}

void function(char c)
{
	cout << "function(char c) call" << endl;
}

void function(int a, int b)
{
	cout << "function(int a, int b) call" << endl;
}
int main()
{
	function();
	function('a');
	function(12, 13);
	return 0;
}