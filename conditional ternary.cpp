//���Ǻ� ���� ������
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int z = 0;

	z = x > y ? x : y; // 2��(x > y)���� true�� 3��(x : y)���� �տ� �ִ� ���� z�� ����, false�� 3���� �ڿ� ���� ����.(3���� ���� true, �ڰ� false)

	cout << "x�� y�� �� ū ���� : " << z << endl;

	return 0;
}