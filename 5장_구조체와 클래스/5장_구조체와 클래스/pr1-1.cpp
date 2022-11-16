#include<iostream>
using namespace std;
// 클래스 선언 === {멤버변수 + 멤버함수}
class Account
{
public:
	char accID[20];				// 계좌번호
	char secID[4];				// 비밀번호
	char name[10];				// 이름
	int balance;				// 잔액
	void Deposit()
	{
		int money;
		cout << "입금할 금액을 입력하시오 ? ";
		cin >> money;
		balance += money;
		cout << "잔	액 : " << balance << endl;
	}
	void Withdraw()
	{
		int money;
		cout << "출금할 금액을 입력하시오 ? ";
		cin >> money;
		if (money > balance)
		{
			cout << "잔액이 부족합니다" << endl;
		}
		else
		{
			balance -= money;
			cout << "잔	액 : " << balance << endl;
		}
	}
};

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