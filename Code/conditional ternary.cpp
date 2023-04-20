//조건부 삼항 연산자
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int z = 0;

	z = x > y ? x : y; // 2항(x > y)에서 true면 3항(x : y)에서 앞에 있는 값을 z에 대입, false면 3항의 뒤에 값을 대입.(3항의 앞이 true, 뒤가 false)

	cout << "x와 y중 더 큰 값은 : " << z << endl;

	return 0;
}