#include<iostream>
using namespace std;

class NameCard
{
	char* name;
	char* phone;
	char* address;
	char* rank;
public:
	NameCard(const char*, const char*, const char*, const char*);
	~NameCard();
	void Showdata();
};

NameCard::NameCard(const char* _name, const char* _phone, const char* _address, const char* _rank)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);

	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);

	address = new char[strlen(_address) + 1];
	strcpy(address, _address);

	rank = new char[strlen(_rank) + 1];
	strcpy(rank, _rank);
}

NameCard::~NameCard()
{
	delete[]name;
	delete[]phone;
	delete[]address;
	delete[]rank;
}

void NameCard::Showdata()
{
	cout << "이름 :		" << name << endl;
	cout << "전화번호 :	" << phone << endl;
	cout << "주소 :		" << address << endl;
	cout << "직급:		" << rank << endl<<endl;
}

int main()
{
	NameCard* array[3];

	array[0] = new NameCard("KIM", "010-1234-1243", "SEOUL", "CEO");
	array[1] = new NameCard("LEE", "010-1122-1254", "BUSAN", "CTO");
	array[2] = new NameCard("PARK", "010-6896-3465", "JEJU", "CSO");

	for (int i = 0; i < 3; i++)
	{
		array[i]->Showdata();
	}
	
	return 0;
}