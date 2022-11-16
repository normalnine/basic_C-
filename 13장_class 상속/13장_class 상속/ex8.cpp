#include<iostream>
using namespace std;
class AAA
{
private:	// 寇何立辟X, 郴何立辟X
	int a;
protected:	// 寇何立辟X, 郴何立辟O
	int b;
public:		// 寇何立辟O, 郴何立辟O
	int c;
};
class BBB : public AAA
{
public:
	void SetData()
	{
		a = 10;
		b = 20;
		c = 30;
	}
};
int main()
{
	AAA aaa;
	aaa.a = 10;
	aaa.b = 20;
	aaa.c = 30;

	BBB bbb;
	bbb.SetData();
	return 0;
}