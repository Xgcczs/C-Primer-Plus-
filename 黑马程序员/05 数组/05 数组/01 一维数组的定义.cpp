#include<iostream>
using namespace std;
int main1()
{
	// ����Ķ���

	/*
		1. �������� ������[ ���鳤�� ]
		2. �������� ������[ ���鳤�� ] = {val_1��val_2��...}��
		3. �������� ������[ ] = {val_1��val_2��...}��
	*/

	// 1.
	cout << "����1��" << endl;
	int array[4];
	array[0] = 111;
	array[1] = 222;
	array[2] = 555;
	array[3] = 786;

	for (int i = 0; i < 4; i++)
	{
		cout << array[i] << endl;
	}

	//	2. ��ע�⡿����ڳ�ʼ��ʱ��û��ȫ�����꣬�����0����ȫ��
	cout <<endl<< "����2��" << endl;
	int array2[4] = { 0,1,3,4 };
	for (int i = 0; i < 4; i++)
	{
		cout << array2[i] << endl;
	}
	
	//	3.��ע�⡿��������ʱ�������г�ʼ����
	cout << endl<<"����3��"<<endl;
	int array3[] = { 666,888,234,00 };
	for (int i = 0; i < 4; i++)
	{
		cout << array3[i] << endl;
	}
	system("pause");
	return 0;
}
