#include<iostream>
using namespace std;
void pay(int& a)
{
	cout << "�̹� �� �޿� : " << 50+a*0.12 << "����" << endl;	
}

int main()
{
	int money = 0;

	while (true)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է��Ͻÿ�(-1 to end) : ";
		cin >> money;		
		if (money == -1) 
		{
			cout << "���α׷� ����" << endl;
			break;
		}
		pay(money);
		
	}
	return 0;
}