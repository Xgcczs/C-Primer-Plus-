#include<iostream>
using namespace std;
int main3()
{
	// 选择结构  多条件if语句
	// 1. 输入一个分数
	int score;
	cin >> score;
	cout << "您的考试分数为：" << score << endl;

	//2. 判断
	if (score > 600)
	{
		cout << "一本的苗子" << endl;
	}
	else if (score > 500)
	{
		cout << "二本的苗子" << endl;
	}
	else if (score > 400)
	{
		cout << "三本的苗子" << endl;
	}
	else
	{
		cout << "准备二战" << endl;
	}
	system("pause");
	return 0;
}
