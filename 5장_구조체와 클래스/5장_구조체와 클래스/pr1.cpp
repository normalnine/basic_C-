#include<iostream>
using namespace std;

struct Account
{
	char accID[20];
	char secID[4];
	char name[10];
	int balance;
};
typedef struct Account Account;

void Deposit(Account&_acc)
{	
	int money;
	cout << "�Ա��� �ݾ��� �Է��Ͻÿ� ? ";
	cin >> money;
	_acc.balance += money;
	cout << "��	�� : "<<_acc.balance << endl;
}
void Withdraw(Account&_acc)
{
	int money;
	cout << "����� �ݾ��� �Է��Ͻÿ� ? ";
	cin >> money;
	if (money > _acc.balance)
	{
		cout << "�ܾ��� �����մϴ�" << endl;
	}
	else 
	{
		_acc.balance -= money;
		cout << "��	�� : " << _acc.balance << endl;
	}
	
}

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
		Deposit(acc);
		break;
	case 2:
		Withdraw(acc);
		break;
	default:
		break;
	}
	return 0;
}