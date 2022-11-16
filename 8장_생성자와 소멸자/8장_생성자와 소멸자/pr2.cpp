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
	cout << "[ " << hour << "시 " << minute << "분 " << second << "초 ]" << endl;
}

void Time::ShowTimeinSec()
{
	cout << hour * 3600 + minute * 60 + second << "초" << endl;
}

int main()
{
	Time time1(10); // 10시 0분 0초;
	Time time2(10, 20); // 10시 20분 0초;
	Time time3(10, 20, 30); // 10시 20분 30초;
	time2.ShowTime();
	time2.ShowTimeinSec();
	return 0;
}