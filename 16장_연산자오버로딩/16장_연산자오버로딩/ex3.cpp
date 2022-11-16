// string 클래스 만들기
#include<iostream>
using namespace std;

class UserString
{
private:
	char* value;
public:
	UserString(char* str = NULL)
	{
		if (str != NULL)
			{
				value = new char[strlen(str) + 1];
				strcpy(value, str);
			}
	}
	char* getValue()
	{
		return value;
	}
	void setValue(char* str)
	{
		value = new char[strlen(str) + 1];
		strcpy(value, str);
	}
	friend UserString* operator+(UserString& Ref, char* str);
};

UserString* operator+(UserString& Ref, char* str)
{
	UserString* temp;
	temp = new UserString();
	temp->value = new char[strlen(Ref.value) + 2];
	strcpy(temp->value, Ref.value);
	strcat(temp->value, str);
	return temp;
}

int main()
{
	UserString Obj("Hello");
	cout << Obj.getValue() << endl;
	Obj.setValue("Test");
	cout << Obj.getValue() << endl;
	UserString* Obj1;
	Obj1 = Obj + "String";
	cout << Obj1->getValue() << endl;
	return 0;
}