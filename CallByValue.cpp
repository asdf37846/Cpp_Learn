#include <iostream>

using namespace std;

void Func(int arg)//= year ����
{
	cout << "���� �� : " << arg << endl;
	arg += 10;
	cout << "���� �� : " << arg << endl;
}

int main()
{
	int year = 10;

	Func(year);

	cout << "�Լ� ���� �� : " << year << endl; //Func���� year�� �����ϰ� ���ϴ°Ŷ� main�� year�� ������ X

	return 0;
}