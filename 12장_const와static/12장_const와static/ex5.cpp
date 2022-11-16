#include <iostream>
using namespace std;

class Count
{
	 int cnt;
 public:
	 Count() : cnt(0) {} // 생성 자 함수
	 const int* GetPtr() const
		 {
		 return &cnt;
		 }
	 void Increment()
		 {
		 cnt++;
		 }
	 void ShowData() const
		 {
		 ShowIntro();
		 cout << cnt << endl;
		 }
	 void ShowIntro() const
		 {
		 cout << "현재 count의 값 : " << endl;
		 }
	 };
int main(void)
{
	Count count;
	count.Increment();
	count.ShowData();
	return 0;
}
	