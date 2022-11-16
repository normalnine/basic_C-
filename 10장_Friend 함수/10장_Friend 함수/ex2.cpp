#include<iostream>
using namespace std;

class Truck;
class Car
{
	int passengers;
	int speed;
public:
	Car(int p, int s)
	{
		passengers = p;
		speed = s;
	}
	int faster(Truck t);
};

class Truck
{
	int passengers;
	int speed;
	
public:
	Truck(int p, int s)
	{
		passengers = p;
		speed = s;
	}
	friend int Car::faster(Truck t);
};
int Car::faster(Truck t)
{
	return speed - t.speed;	
}

int main()
{
	int t, spec, pot; // t=속도차이, spec=스펙트라속도, pot=포터속도
	cout << "Spectra speed = ";
	cin >> spec;
	cout << "poter speed = ";
	cin >> pot;
	Car Spectra(5, spec);
	Truck Poter(2, pot);
	cout << "======================" << endl;
	cout << "Compare Spectra, Poter" << endl;
	t = Spectra.faster(Poter);
	if (t < 0)
		cout << "Poter is " << -t << "Km/h" << " faster " << endl;
	else if (t == 0)
		cout << "Spectra and Poter speed is " << "the same" << endl;
	else
		cout << "Spectra is " << t << "Km/h" << " faster " << endl;
	return 0;
}