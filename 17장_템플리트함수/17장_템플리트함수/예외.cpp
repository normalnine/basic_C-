// ����(Exception) : (����) �������� ���� ����, ���α׷��� ����
// ���� ó��(Exception Handing) : ���� ��Ȳ�� ó���� �� �ֵ��� �ڵ��� �帧�� �����ϴ� ����
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
		cout << "������"<<expn<<"�� �Է� �Ұ����մϴ�." << endl;
	}

	return 0;
}