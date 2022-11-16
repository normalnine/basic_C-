#include<iostream>
using namespace std;

class class_create
{
	int array[777];
	int s_point, r_point;
public:
	class_create();
	void class_get(int i);
	int class_put();
};

class_create::class_create()
{
	s_point = r_point = 0;
	cout << "생성자 입니다." << endl;
}

void class_create::class_get(int i)
{
	s_point++;
	array[s_point] = i;
}

int class_create::class_put()
{
	r_point++;
	return array[r_point];
}

int main()
{
	class_create ob1, ob2;
	ob1.class_get(39);
	ob1.class_get(27);

	ob2.class_get(333);
	ob2.class_get(777);

	cout << ob1.class_put() << " ";
	cout << ob1.class_put() << endl;
	cout << ob2.class_put() << " ";
	cout << ob2.class_put() << endl;

}