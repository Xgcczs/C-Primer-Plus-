#include<iostream>
using namespace std;
int main05()
{
	int book[12];
	const char * month[] = {"1月","2月" ,"3月" ,"4月" ,"5月" ,"6月" ,"7月","8月" ,"9月" ,"10月" ,"11月" ,"12月" };
		// 字符串数组 ： 指针+1维数组 常量指针
	int sum = 0;
	cout << "输入1月-12月的图书销售量::" << endl;
	for (int i = 0; i < 12; i++)
	{
		cin >> book[i];
		sum = sum + book[i];
	}

	for (int j = 0; j < 12; j++)
	{
		cout << month[j] << "销售额为： " << book[j] << endl;
	}

	cout << "全年销售额为： " << sum << endl;
	system("pause");
	return 0;
}
