#include<iostream>
using namespace std;
int main6()
{
	int book[3][12];
	int sum[3] = {0,0,0};
	const char* month[] = { "1��","2��" ,"3��" ,"4��" ,"5��" ,"6��" ,"7��","8��" ,"9��" ,"10��" ,"11��" ,"12��" };
	for (int i = 0; i < 3; i++)
	{
		cout << "�������" << i + 1 << "���ÿ���µ�ͼ����������" << endl;
		for (int j = 0; j < 12; j++)
		{
			cin >> book[i][j];
			sum[i] = sum[i] + book[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		cout << "��" << i + 1 << "��ĵ�ͼ������������: " << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << month[j] << "��������Ϊ��" << book[i][j] << endl;
		}
		cout << "��" << i + 1 << "��ĵ�ͼ������������Ϊ: "<< sum[i] <<endl;
		cout << endl;
	}
	cout << "�������������Ϊ�� " << sum[0] + sum[1] + sum[2] << endl;

	system("pause");
	return 0;
}
