#include<iostream>
using namespace std;
template <typename X> void function(X a)
{
	cout << "Inside fucntion(X a)" << endl;
}

template <typename Y, typename Z>
void function(Y a, Z b)
{
	cout << "Inside function (Y a, Z b)" << endl;
}

int main()
{
	function(10);
	function(10, 20);
}
