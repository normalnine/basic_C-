#include<iostream>
using namespace std;

class AAA
{
	int num;
public:
	AAA(int _num) : num(_num) {}
	void ShowData()
	{
		cout << "void ShowData()�Լ� ȣ�� " << endl;
		cout << num << endl;
	}// const ����Լ��� �����ε�
	void ShowData() const	
	{
		cout << "void ShowData() const �Լ� ȣ�� " << endl;
		cout << num << endl;
	}
};

int main()
{
	const AAA aaa1(20); // const ��ü�� const �Լ��� ��밡��
	AAA aaa2(70);
	aaa1.ShowData();
	aaa2.ShowData();
	return 0;
}