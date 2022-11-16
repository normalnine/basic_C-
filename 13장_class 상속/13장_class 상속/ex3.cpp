#include<iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "AAA() call!" << endl;
	}
	AAA(int i)
	{
		cout << "AAA(int i) call!" << endl;
	}
};

class BBB :public AAA
{
public:
	BBB()
	{
		cout << "BBB() call!" << endl;
	}
	BBB(int j) :AAA(j) // 지정안해주면 부모클래스 디폴트 생성자 실행
	{
		cout << "BBB(int j) call!" << endl;
	}
};

int main()
{
	cout << "객체 1 생성" << endl;
	BBB bbb1;
	
	cout << "객체 2 생성" << endl;
	BBB bbb2(10);

	return 0;
}