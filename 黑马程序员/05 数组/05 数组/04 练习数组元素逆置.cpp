#include<iostream>
using namespace std;
int main4()
{
	int arr[] = { 0,1,2,3,4,5 };
	cout << "原来的数组为：" << endl;
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
	int start = 0; // 第一个元素的索引
	int temp;
	int end = sizeof(arr) / sizeof(arr[1]) - 1;// 最后一个元素的索引
	for (;;)
	{
		if (start >= end) // 此处要注意！！！！
		{
			break;
		}

		temp = arr[start]; // 中间变量
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	cout << "逆置的结果为："<<endl;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
