 #include <iostream>
 using namespace std;

 const int SIZE = 20;
 class Person
 {	 
 public:
	 char name[SIZE];
	 char phone[SIZE];
	 int age;
	 void showdata();
	 };

 void Person::showdata()
 {
	 cout << "name : " << name << endl;
	 cout << "phone : " << phone << endl;
	 cout << "age : " << age << endl;
 }
 int main()
 {
	 Person p = { "KIM", "013-113-1113", 22 }; // Error
	 p.showdata();
	 return 0;
	 }