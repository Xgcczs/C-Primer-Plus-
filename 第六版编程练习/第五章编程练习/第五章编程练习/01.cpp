#include<iostream>
using namespace std;
int main1()
{
	int num1, num2;
	int sum = 0;
	cout << "输入两个整数： " << endl;
	cin >> num1;
	cin >> num2;
	for (int i = num1; i <= num2; i++)
	{
		sum = sum + i;
	}
	cout << num1 << "—" << num2 << "的整数和为： " << sum << endl;
	system("pause");
	return 0;
}
