#include<iostream>
using namespace std;
int main3()
{
	float i;
	float sum = 0;
	do
	{
		cout << "输入一个数字:" << endl;
		cin >> i;
		if (i != 0)
		{
			sum += i;
			cout << "截至目前为止，累计和为： " << sum<<endl;
		}
		else
		{
			break;
		}
	} while (1);
	cout << "程序结束，累计总和为： " << sum << endl;

	system("pause");
	return 0;
}
