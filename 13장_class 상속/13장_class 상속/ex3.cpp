#include<iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "AAA() call!" << endl;
	}
	AAA(int i)
	{
		cout << "AAA(int i) call!" << endl;
	}
};

class BBB :public AAA
{
public:
	BBB()
	{
		cout << "BBB() call!" << endl;
	}
	BBB(int j) :AAA(j) // ���������ָ� �θ�Ŭ���� ����Ʈ ������ ����
	{
		cout << "BBB(int j) call!" << endl;
	}
};

int main()
{
	cout << "��ü 1 ����" << endl;
	BBB bbb1;
	
	cout << "��ü 2 ����" << endl;
	BBB bbb2(10);

	return 0;
}