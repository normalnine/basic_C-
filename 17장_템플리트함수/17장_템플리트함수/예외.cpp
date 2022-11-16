// 예외(Exception) : (실행) 예상하지 못한 오류, 프로그램이 중지
// 예외 처리(Exception Handing) : 예외 상황을 처리할 수 있도록 코드의 흐름을 변경하는 행위
// try { throw } ~ catch
#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	try	
	{
		if (num2 == 0)
		{
			throw num2;
		}		
		cout << num1 / num2 << endl;
		cout << num1 % num2 << endl;
	}
	catch (int expn) // expn == num2
	{
		cout << "제수는"<<expn<<"을 입력 불가능합니다." << endl;
	}

	return 0;
}