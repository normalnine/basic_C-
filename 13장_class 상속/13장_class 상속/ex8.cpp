#include<iostream>
using namespace std;
class AAA
{
private:	// �ܺ�����X, ��������X
	int a;
protected:	// �ܺ�����X, ��������O
	int b;
public:		// �ܺ�����O, ��������O
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