#include<iostream>
using namespace std;

class Vehicle
{
	int passenger;
	int baggage;
public:
	Vehicle(int person = 0, int weight = 0)
	{
		passenger = person;
		baggage = weight;
	}
	void Ride(int person)
	{
		passenger += person;
	}
	void Load(int weight)
	{
		baggage += weight;
	}
};
class Airplane : public Vehicle
{
	int crew_man;
public:
	Airplane(int person = 0, int weight = 0, int crew = 0) :Vehicle(person, weight)
	{
		crew_man = crew;

	}
	void TakeCrew(int crew)
	{
		crew_man += crew;
	}
};
class Train : public Vehicle
{
	int length;
public:
	Train(int person = 0, int weight = 0, int len = 0) :Vehicle(person, weight)
	{
		length = len;
	}
	void SetLenght(int len)
	{
		length = len;
	}
};

int main()
{
	return 0;
}

/*
class Airplane
---passenger
---baggage
---crew_man
---void Ride(int person)
---void Load(int weight)
---void TakeCrew(int crew)

class Train
---passenger
---baggage
---length
---void Ride(int person)
---void Load(int weight)
---void SetLength(int len)

===> �ڽ�Ŭ������ �θ�Ŭ�����̴�.(�Ϲ�ȭ ����, IS-A ����)

class Vehicle
---passenger
---baggage
---void Ride(int person)
---void Load(int weight)
*/