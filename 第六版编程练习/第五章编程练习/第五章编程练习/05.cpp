#include<iostream>
using namespace std;
int main05()
{
	int book[12];
	const char * month[] = {"1��","2��" ,"3��" ,"4��" ,"5��" ,"6��" ,"7��","8��" ,"9��" ,"10��" ,"11��" ,"12��" };
		// �ַ������� �� ָ��+1ά���� ����ָ��
	int sum = 0;
	cout << "����1��-12�µ�ͼ��������::" << endl;
	for (int i = 0; i < 12; i++)
	{
		cin >> book[i];
		sum = sum + book[i];
	}

	for (int j = 0; j < 12; j++)
	{
		cout << month[j] << "���۶�Ϊ�� " << book[j] << endl;
	}

	cout << "ȫ�����۶�Ϊ�� " << sum << endl;
	system("pause");
	return 0;
}
