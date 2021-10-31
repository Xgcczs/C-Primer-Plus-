#include<iostream>
using namespace std;
int main()
{
	// goto  无条件跳转语句
	cout << "1." << endl;
	goto FLAG;

	cout << "2." << endl;
	cout << "3." << endl;
	cout << "4." << endl;

	FLAG:
	cout << "5." << endl;
	system("pause");
	return 0;
}
