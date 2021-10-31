#include<iostream>
using namespace std;
int main()
{
	float time[4];
	cout << "请输入三次40m跑的成绩："<<endl;
	cin >> time[0];
	cin >> time[1];
	cin >> time[2];
	time[4] = (time[0] + time[1] + time[2]) / 3;

	for (int i = 0; i < 3; i++)
	{
		cout << "40m跑第" << i + 1 << "次的成绩为" << time[i] << endl;
	}
	cout << "平均成绩为： " << time[4] << endl;
	system("pause");
	return 0;
}