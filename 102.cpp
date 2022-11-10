#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream stream;
	stream.open("D:\\C++\\hello.txt");

	if (stream.good() == true)
		cout << "존재 함" << endl;
	else
		cout << "존재 안함" << endl;

	stream.close();

	return 0;
}