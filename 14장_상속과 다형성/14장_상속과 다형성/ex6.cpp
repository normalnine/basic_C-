#include<iostream>
using namespace std;

class AAA
{
public:
	void fct()	// (�θ�)����Լ��� �ڽİ�ü�� �þ߿��� hide �Ǿ���.
	{
		cout << "AAA" << endl;
	}
};
class BBB : public AAA
{
public:
	void fct()	// ����Լ�(�޼ҵ�) �������̵�
	{
		cout << "BBB" << endl;
	}
};

int main()
{
	BBB* b = new BBB;
	b->fct();

	AAA* a = b;
	a->fct();

	delete b;
	return 0;
}
/*
=====������=====
�����ε� : �ߺ�����
�� Ŭ���� �� : ����Լ��� �̸��� ����, �Ű������� ���� �Ǵ� �ڷ����� �ٸ�

�������̵� : ������
�� Ŭ���� �� : ����Լ��� �̸��� ����, �Ű������� ����
*/