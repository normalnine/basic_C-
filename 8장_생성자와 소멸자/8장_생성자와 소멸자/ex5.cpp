#include<iostream>
using namespace std;

class myclass
{
	int a;
public:
	myclass(void);		// default void �������� ���
	myclass(int x);		// �Ű������� ���� ������
	~myclass(void);
	void set(int);		// ����Լ�
	void show();
};

myclass::myclass(void)
{
	cout << "void constructor" << endl;
}

myclass::myclass(int x)
{
	cout << "In constructor" << endl;
	a = x;
}

myclass::~myclass(void)
{
	cout << "void destructor" << endl;
}
void myclass::set(int x)
{
	a = x;
}

void myclass::show()
{
	cout << a << endl;
}

int main()
{
			
	myclass obj; // ��ü ������ ���ÿ� default void ������ ȣ��
	myclass ob(4);// ��ü ������ ���ÿ� ������ �ڵ�ȣ��
	ob.show();
	return 0;
}
/*
������ : ��ü ���� ��, �ڵ�ȣ��Ǵ� ����Լ�
1. ��ȯ���� ����
2. �����ڸ��� Ŭ������� ����
3. ����ȣ�� �Ұ���(���� 1ȸ �ڵ�ȣ��)
4. ������(�Լ�) �����ε�
	Myclass(void)
	Myclass(int)
	Myclass(int,int)	

�Ҹ��� : ��ü �Ҹ�(����) ��, �ڵ� ȣ��Ǵ� ����Լ�
1. ��ȯ���� ����
2. �Ҹ��ڸ��� ~Ŭ������� ����
3. ����ȣ�� �Ұ���
4. void �Ҹ��ڸ� ����
*/