#include<iostream>
using namespace std;
int main2()
{
	// ѡ��ṹ  ����if���
	// 1. Input Score
	int score;
	cout << "������һ��������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;

	// 2.�ж�
	if (score > 600)
	{
		cout << "��ϲ��" << endl;
	}
	else
	{
		cout << "��Ǹ��" << endl;
	}

	system("pause");
	return 0;
}
