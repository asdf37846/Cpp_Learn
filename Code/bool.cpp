//bool ����
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 6;

	bool is_true = false; //bool ���� ������ false�� �ʱ�ȭ

	if (x > y) // x�� y�� ���Ͽ� bool�� �� �Ҵ�
	{
		is_true = true;
	}
	else
	{
		is_true = false;
	}

	if (is_true == true)
	{
		cout << "x�� y���� Ů�ϴ�" << endl;
	}
	else
	{
		cout << "x�� y���� �۽��ϴ�" << endl;
	}

	return 0;
}