#include<iostream>
using namespace std;
int main3()
{
	// һ�������а��������С������أ���ӡ���ص�С�������
	int arr[] = { 300,250,200,-400,250 };
	int Max;
	Max = arr[0];

	for (int i = 0; i < 5; i++)
	{
		if (Max< arr[i])
		{
			Max = arr[i];
		}
	}

	cout <<"���ص��������Ϊ��" << Max << endl;
	system("pause");
	return 0;
}