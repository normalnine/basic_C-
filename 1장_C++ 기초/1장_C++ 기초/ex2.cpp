#include<iostream>
using namespace std;
int main()
{
	char name[100];
	char language[200];

	cout << "�̸��� �����Դϱ�";
	cin >> name;

	cout << "�����ϴ� ���α׷��� ���� ��� �ǳ���?";
	cin >> language;
	
	cout << "�̸� : " << name << endl;
	cout << "��� : " << language << endl;

	return 0;
}