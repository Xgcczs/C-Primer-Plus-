#include<iostream>
using namespace std;
// ��װһ������������ð�ݷ��������

void BubbleSort(int*arr,int len)// ����1 �������׵�ַ������2������ĳ���
{
	for (int i = 0; i <len - 1 ;i++) //�������
	{
		for (int j = 0; j < len - i - 1;j++) //�ڲ��Ա�
		{
			if (arr[j] >arr[j+1] )
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
}

void PrintArray(int*arr,int len)
{

	for (int k = 0; k < len; k++)
	{
		cout << arr[k] << endl;
	}
}
int main8()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,5,7 };
	int len = sizeof(arr) / sizeof(arr[2]);

	cout << "����ǰ������Ϊ:" << endl;
	PrintArray(arr, len);
	BubbleSort(arr,len);
	cout << "����ǰ������Ϊ:" << endl;
	PrintArray(arr, len);

	system("pause");
	return 0;
}
