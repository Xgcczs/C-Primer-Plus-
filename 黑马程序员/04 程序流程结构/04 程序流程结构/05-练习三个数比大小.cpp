#include<iostream>
using namespace std;
int main5()
{
	int a, b, c;
	cout << "请连续输入三个数：" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	if (a > b)
	{
		if (a > c)
		{
			cout << "三个数中最大的数是：" << a << endl;
		}
		else// c>a>b
		{
			cout << "三个数中最大的数是：" << c << endl;
		}
	}
	else//	a<b
	{
		if (c < b)
		{
			cout << "三个数中最大的数是：" << b << endl;
		}
		else// b<c
		{
			cout << "三个数中最大的数是：" << c << endl;
		}
	}
	system("pause");
	return 0;
}
