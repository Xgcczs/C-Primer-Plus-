#include<iostream>
using namespace std;
int main2()
{
	// 选择结构  多行if语句
	// 1. Input Score
	int score;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;

	// 2.判断
	if (score > 600)
	{
		cout << "恭喜！" << endl;
	}
	else
	{
		cout << "抱歉！" << endl;
	}

	system("pause");
	return 0;
}
