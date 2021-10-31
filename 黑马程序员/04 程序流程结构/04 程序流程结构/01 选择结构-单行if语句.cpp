#include<iostream>
using namespace std;
int main1()
{
	// 选择结构 单行if 语句
	// 1.输入一个分数
	int score;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;

	// 2.判断
	if (score > 600) // 【注意】if后不要加分号
	{
		cout << "恭喜！" << endl;
	}
	system("pause");
	return 0;
}