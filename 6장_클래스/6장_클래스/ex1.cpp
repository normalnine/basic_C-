#include<iostream>
using namespace std;

class Counter
{
public:
	int val;				//�������(�ʵ�)
	void Increment(void)	//����Լ�(�޼ҵ�)
	{
		val++;				//��������
	}
};

int main()
{
	Counter cnt;
	cnt.val = 0;				//�ܺ����� : public ���
	cnt.Increment();			//�ܺ����� : public ���
	cout << cnt.val << endl;	//�ܺ����� : public ���

	return 0;
}