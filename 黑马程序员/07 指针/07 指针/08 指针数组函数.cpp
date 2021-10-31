#include<iostream>
using namespace std;
// 封装一个函数，利用冒泡法完成升序

void BubbleSort(int*arr,int len)// 参数1 是数组首地址，参数2是数组的长度
{
	for (int i = 0; i <len - 1 ;i++) //外侧排序
	{
		for (int j = 0; j < len - i - 1;j++) //内部对比
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

	cout << "排序前的数组为:" << endl;
	PrintArray(arr, len);
	BubbleSort(arr,len);
	cout << "排序前的数组为:" << endl;
	PrintArray(arr, len);

	system("pause");
	return 0;
}
