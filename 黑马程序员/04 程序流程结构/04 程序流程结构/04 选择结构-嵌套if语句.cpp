#include<iostream>
using namespace std;
int main4()
{
	// 1. ����һ������
	int score;
	cout << "���������Ŀ��Գɼ��� " << endl;
	cin >> score;
	cout << "���Ŀ��Է���Ϊ�� " << score << endl;

	//	2.�ж�
	if (score > 600)
	{
		cout << "һ��������" << endl;
		if (score > 700)
		{
			cout << "���鱨��985" << endl;
		}
		else if (score > 650)
		{
			cout << "���鱨��211" << endl;
		}
		else 
		{
			cout << "���鱨����ͨһ��" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "����������" << endl;
	}
	else if (score > 400)
	{
		cout << "����������" << endl;
	}
	else
	{
		cout << "����׼����ս" << endl;
	}
	system("pause");
	return 0;
}
