#include<iostream>
using namespace std;

class student
{
	const int id;
	int age;
	char name[20];
	char subject[30];
public:
	student(int _id, int _age, const char* _name, const char* _subject) :id(_id)
	{
		// id = _id Error!
		age = _age;
		strcpy(name, _name);
		strcpy(subject, _subject);
	}
	void ShowData()
	{
		cout << "이	름 : " << name << endl;
		cout << "나	이 : " << age << endl;
		cout << "학	번 : " << id << endl;
		cout << "학	과 : " << subject << endl;
	}
};

int main()
{
	student Kim(200577065, 20, "Kim Gil Dong", "Compuer Eng.");
	student Hong(200577066, 21, "Hong Gil Dong", "Electronics Eng.");

	Kim.ShowData();
	cout << endl;
	Hong.ShowData();
	return 0;
}