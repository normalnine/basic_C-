#include<iostream>
using namespace std;
// Ŭ���� ���� === {������� + ����Լ�}
class Account
{
public:
	char accID[20];				// ���¹�ȣ
	char secID[4];				// ��й�ȣ
	char name[10];				// �̸�
	int balance;				// �ܾ�
	void Deposit()
	{
		int money;
		cout << "�Ա��� �ݾ��� �Է��Ͻÿ� ? ";
		cin >> money;
		balance += money;
		cout << "��	�� : " << balance << endl;
	}
	void Withdraw()
	{
		int money;
		cout << "����� �ݾ��� �Է��Ͻÿ� ? ";
		cin >> money;
		if (money > balance)
		{
			cout << "�ܾ��� �����մϴ�" << endl;
		}
		else
		{
			balance -= money;
			cout << "��	�� : " << balance << endl;
		}
	}
};

int main()
{
	Account acc;
	cout << "���¹�ȣ : ";
	cin >> acc.accID;
	cout << "��й�ȣ : ";
	cin >> acc.secID;
	cout << "�̸� : ";
	cin >> acc.name;
	cout << "�ܾ� : ";
	cin >> acc.balance;

	int s;

	cout << "�Ա��� 1�� ����� 2�� ����� 0��" << endl;
	cout << "��ȣ�� �Է��Ͻÿ�? ";
	cin >> s;

	switch (s)
	{
	case 0:
		break;
	case 1:
		acc.Deposit();
		break;
	case 2:
		acc.Withdraw();
		break;
	default:
		break;
	}
	return 0;
}