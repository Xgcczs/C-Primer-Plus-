#include<iostream>
using namespace std;
int main4()
{
	int arr[] = { 0,1,2,3,4,5 };
	cout << "ԭ��������Ϊ��" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}

	/*
	0   5 
	1    4
	2    3 
	3    2
	4    1
	5    0
	*/
	int start = 0; // ��һ��Ԫ�ص�����
	int temp;
	int end = sizeof(arr) / sizeof(arr[1]) - 1;// ���һ��Ԫ�ص�����
	for (;;)
	{
		if (start >= end) // �˴�Ҫע�⣡������
		{
			break;
		}

		temp = arr[start]; // �м����
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	cout << "���õĽ��Ϊ��"<<endl;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
