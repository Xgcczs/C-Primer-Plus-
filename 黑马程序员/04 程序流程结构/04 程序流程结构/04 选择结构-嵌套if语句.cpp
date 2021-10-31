#include<iostream>
using namespace std;
int main4()
{
	// 1. 输入一个分数
	int score;
	cout << "请输入您的考试成绩： " << endl;
	cin >> score;
	cout << "您的考试分数为： " << score << endl;

	//	2.判断
	if (score > 600)
	{
		cout << "一本的苗子" << endl;
		if (score > 700)
		{
			cout << "建议报考985" << endl;
		}
		else if (score > 650)
		{
			cout << "建议报考211" << endl;
		}
		else 
		{
			cout << "建议报考普通一本" << endl;
		}
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
		cout << "建议准备二战" << endl;
	}
	system("pause");
	return 0;
}
