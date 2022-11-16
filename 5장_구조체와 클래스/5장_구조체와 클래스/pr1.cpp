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
	cout << "입금할 금액을 입력하시오 ? ";
	cin >> money;
	_acc.balance += money;
	cout << "잔	액 : "<<_acc.balance << endl;
}
void Withdraw(Account&_acc)
{
	int money;
	cout << "출금할 금액을 입력하시오 ? ";
	cin >> money;
	if (money > _acc.balance)
	{
		cout << "잔액이 부족합니다" << endl;
	}
	else 
	{
		_acc.balance -= money;
		cout << "잔	액 : " << _acc.balance << endl;
	}
	
}

int main()
{
	Account acc;
	cout << "계좌번호 : ";
	cin >> acc.accID;
	cout << "비밀번호 : ";
	cin >> acc.secID;
	cout << "이름 : ";
	cin >> acc.name;
	cout << "잔액 : ";
	cin >> acc.balance;

	int s;

	cout << "입금은 1번 출금은 2번 종료는 0번" << endl;
	cout << "번호를 입력하시오? ";
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