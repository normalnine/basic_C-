#include<iostream>
using namespace std;

int BoxVolume(int length, int width = 1, int height = 1); 
// 1�� ����Ʈ ���� �Ű�����

int main()
{
	cout << " [3,3,3]	: " << BoxVolume(3, 3, 3) << endl;
	cout << " [5,5,def]	: " << BoxVolume(5, 5) << endl;
	cout << " [7,def,def]	: " << BoxVolume(7) << endl;
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}