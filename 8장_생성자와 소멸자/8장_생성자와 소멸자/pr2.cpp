#include<iostream>
using namespace std;

class Time
{
	int hour;
	int minute;
	int second;
public:
	Time(int, int, int);
	void ShowTime();
	void ShowTimeinSec();
};

Time::Time(int _h = 0, int _m =0 ,int _s = 0)
{
	hour = _h;
	minute = _m;
	second = _s;
}

void Time::ShowTime()
{
	cout << "[ " << hour << "�� " << minute << "�� " << second << "�� ]" << endl;
}

void Time::ShowTimeinSec()
{
	cout << hour * 3600 + minute * 60 + second << "��" << endl;
}

int main()
{
	Time time1(10); // 10�� 0�� 0��;
	Time time2(10, 20); // 10�� 20�� 0��;
	Time time3(10, 20, 30); // 10�� 20�� 30��;
	time2.ShowTime();
	time2.ShowTimeinSec();
	return 0;
}