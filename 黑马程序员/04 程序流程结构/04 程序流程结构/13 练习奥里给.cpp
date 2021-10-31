#include<iostream>
using namespace std;
int main13()
{
	//1-100，如果（个位含有7）或（十位含有7）或（该数字是7的倍数） 输出“奥里给”，否则直接输出该数字
	int gewei, shiwei,beishu;
	for (int num = 1; num <= 100; num++)
	{
		gewei = num % 10;
		shiwei = num / 10;
		beishu = num % 7;
		if ((gewei == 7) || (shiwei == 7) || (beishu == 0))
		{
			cout << "奥里给" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
	
	system("pause");
	return 0;
}
