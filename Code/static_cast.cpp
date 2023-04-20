//캐스트 연산자
#include <iostream>

using namespace std;

int main()
{
	int x = 2;
	double y = 4.4;

	int i = static_cast<int>(y / x); // 계산의 결과를 static_cast를 통해 int로 변환
	int j = (int)y / x; // C언어 스타일의 캐스팅, 사용 안하는게 좋음
	double k = y / x;

	cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
	cout << "4.4 / 2 = (int) " << j << endl;
	cout << "4.4 / 2 = " << k << endl;

	return 0;
}