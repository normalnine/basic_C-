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
	BBB b;
	b.fct();	// �������̵��� ����Լ� ȣ��
	b.AAA::fct(); // �������̵� �Ǳ� �� �θ��� ����Լ� ȣ��
	return 0;
}