#include<iostream>
using namespace std;
template <typename T1,typename T2>
T2 ShowData(T1 a, T2 b)
{
	return a + b;
}
int main(void)
{
	cout<<ShowData(1, 2)<<endl;
	cout<<ShowData(3, 2.5)<<endl;
	return 0;
}