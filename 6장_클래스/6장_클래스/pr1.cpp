#include<iostream>
using namespace std;

class calculator
{
private:
	int add_count, min_count, mul_count, div_count;
public:
	void Init()
	{
		add_count = 0;
		min_count = 0;
		mul_count = 0;
		div_count = 0;
	}
	int Add(int num1, int num2) 
	{ 
		add_count++; 
		return (num1 + num2); 
	}
	int Min(int num1, int num2)
	{
		min_count++;
		return (num1 - num2);
	}
	int Mul(int num1, int num2)
	{
		mul_count++;
		return (num1 * num2);
	}
	int Div(int num1, int num2)
	{
		div_count++;
		return (num1 / num2);
	}
	void ShowOpCount()
	{
		cout << "µ¡¼À : " << add_count;
		cout << ",  »¬¼À : " << min_count;
		cout << ",  °ö¼À : " << mul_count;
		cout << ",  ³ª´°¼À : " << div_count << endl;
	}
};

int main()
{
	calculator cal;
	cal.Init();
	
	cout << "3 + 5 = " << cal.Add(3, 5) << endl;
	cout << "3 / 5 = " << cal.Div(3, 5) << endl;
	cout << "12 - 4 = " << cal.Min(12, 4) << endl;
	cout << "12 / 4 = " << cal.Div(12, 4) << endl;
	cal.ShowOpCount();

	return 0;
}