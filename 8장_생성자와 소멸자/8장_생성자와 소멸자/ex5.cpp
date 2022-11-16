#include<iostream>
using namespace std;

class myclass
{
	int a;
public:
	myclass(void);		// default void 생성자의 모습
	myclass(int x);		// 매개변수를 갖는 생성자
	~myclass(void);
	void set(int);		// 멤버함수
	void show();
};

myclass::myclass(void)
{
	cout << "void constructor" << endl;
}

myclass::myclass(int x)
{
	cout << "In constructor" << endl;
	a = x;
}

myclass::~myclass(void)
{
	cout << "void destructor" << endl;
}
void myclass::set(int x)
{
	a = x;
}

void myclass::show()
{
	cout << a << endl;
}

int main()
{
			
	myclass obj; // 객체 생성과 동시에 default void 생성자 호출
	myclass ob(4);// 객체 생성과 동시에 생성자 자동호출
	ob.show();
	return 0;
}
/*
생성자 : 객체 생성 시, 자동호출되는 멤버함수
1. 반환형이 없음
2. 생성자명은 클래스명과 동일
3. 강제호출 불가능(최초 1회 자동호출)
4. 생성자(함수) 오버로딩
	Myclass(void)
	Myclass(int)
	Myclass(int,int)	

소멸자 : 객체 소멸(직전) 시, 자동 호출되는 멤버함수
1. 반환형이 없음
2. 소멸자명은 ~클래스명과 동일
3. 강제호출 불가능
4. void 소멸자만 존재
*/