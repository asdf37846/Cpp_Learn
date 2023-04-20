//bool 변수
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 6;

	bool is_true = false; //bool 변수 생성후 false로 초기화

	if (x > y) // x와 y를 비교하여 bool에 값 할당
	{
		is_true = true;
	}
	else
	{
		is_true = false;
	}

	if (is_true == true)
	{
		cout << "x는 y보다 큽니다" << endl;
	}
	else
	{
		cout << "x는 y보다 작습니다" << endl;
	}

	return 0;
}