#include<iostream>
using namespace std;
int main13()
{
	//1-100���������λ����7����ʮλ����7���򣨸�������7�ı����� ������������������ֱ�����������
	int gewei, shiwei,beishu;
	for (int num = 1; num <= 100; num++)
	{
		gewei = num % 10;
		shiwei = num / 10;
		beishu = num % 7;
		if ((gewei == 7) || (shiwei == 7) || (beishu == 0))
		{
			cout << "�����" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
	
	system("pause");
	return 0;
}
