#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream stream;
	stream.open("D:\\C++\\hello.txt");

	if (stream.good() == true)
		cout << "���� ��" << endl;
	else
		cout << "���� ����" << endl;

	stream.close();

	return 0;
}