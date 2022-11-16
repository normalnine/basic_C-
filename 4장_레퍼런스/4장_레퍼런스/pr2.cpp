#include<iostream>
using namespace std;
void pay(int& a)
{
	cout << "이번 달 급여 : " << 50+a*0.12 << "만원" << endl;	
}

int main()
{
	int money = 0;

	while (true)
	{
		cout << "판매 금액을 만원 단위로 입력하시오(-1 to end) : ";
		cin >> money;		
		if (money == -1) 
		{
			cout << "프로그램 종료" << endl;
			break;
		}
		pay(money);
		
	}
	return 0;
}