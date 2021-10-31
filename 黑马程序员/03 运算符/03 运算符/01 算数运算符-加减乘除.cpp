#include<iostream>
using namespace std;
int main1()
{
	int a = 10;
	int b = 4;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;	//两个整数相除的结果依然为整数

	double d1 = 1.3;
	double d2 = 0.3;
	cout << d1/d2 << endl;	// 小数可以相除，结果可以为整数，也可以为小数。
	system("pause");
	return 0;
}