#include<iostream>
using namespace std;
int main3()
{
	// ѡ��ṹ  ������if���
	// 1. ����һ������
	int score;
	cin >> score;
	cout << "���Ŀ��Է���Ϊ��" << score << endl;

	//2. �ж�
	if (score > 600)
	{
		cout << "һ��������" << endl;
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
		cout << "׼����ս" << endl;
	}
	system("pause");
	return 0;
}
