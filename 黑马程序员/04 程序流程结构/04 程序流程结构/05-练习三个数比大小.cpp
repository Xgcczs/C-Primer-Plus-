#include<iostream>
using namespace std;
int main5()
{
	int a, b, c;
	cout << "������������������" << endl;
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
			cout << "���������������ǣ�" << a << endl;
		}
		else// c>a>b
		{
			cout << "���������������ǣ�" << c << endl;
		}
	}
	else//	a<b
	{
		if (c < b)
		{
			cout << "���������������ǣ�" << b << endl;
		}
		else// b<c
		{
			cout << "���������������ǣ�" << c << endl;
		}
	}
	system("pause");
	return 0;
}
