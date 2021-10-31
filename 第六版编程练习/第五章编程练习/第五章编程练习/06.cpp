#include<iostream>
using namespace std;
int main6()
{
	int book[3][12];
	int sum[3] = {0,0,0};
	const char* month[] = { "1月","2月" ,"3月" ,"4月" ,"5月" ,"6月" ,"7月","8月" ,"9月" ,"10月" ,"11月" ,"12月" };
	for (int i = 0; i < 3; i++)
	{
		cout << "请输入第" << i + 1 << "年的每个月的图书销售量。" << endl;
		for (int j = 0; j < 12; j++)
		{
			cin >> book[i][j];
			sum[i] = sum[i] + book[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i + 1 << "年的的图书销售量如下: " << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << month[j] << "的销售量为：" << book[i][j] << endl;
		}
		cout << "第" << i + 1 << "年的的图书销售量总量为: "<< sum[i] <<endl;
		cout << endl;
	}
	cout << "三年的销售总量为： " << sum[0] + sum[1] + sum[2] << endl;

	system("pause");
	return 0;
}
