#include <iostream>

using namespace std;

void Func(int arg)//= year 복제
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

int main()
{
	int year = 10;

	Func(year);

	cout << "함수 종료 후 : " << year << endl; //Func에서 year을 복사하고 더하는거라 main의 year은 변하지 X

	return 0;
}