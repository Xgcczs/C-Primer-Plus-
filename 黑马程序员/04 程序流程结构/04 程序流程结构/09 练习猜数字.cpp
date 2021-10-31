#include<iostream>
using namespace std;

//time系统时间头文件
#include<ctime>

int main9()
{
	//随机生成1~100的数
	
	//添加随机数种子，作用是利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	int rand_num,num;
	rand_num = rand() % 100 + 1;// rand()%100 生成0-99的随机数

	num = 0;

	while (num != rand_num)
	{
		cout << "请输入一个1-100的数：" << endl;
		cin >> num;
		if (num > rand_num)
		{
			cout << "太大了！请重新输入" << endl;
		}
		else if (num < rand_num)
		{
			cout << "太小了！请重新输入" << endl;
		}
		else 
		{
			cout << "恭喜你，猜对了！" << endl;
		}	
	}
	cout << "【系统生成的随机数为】："<<rand_num << endl;
	system("pause");
	return 0;
}
