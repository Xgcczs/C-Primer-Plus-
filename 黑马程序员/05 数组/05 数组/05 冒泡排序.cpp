#include<iostream>
using namespace std;
int main5()
{
	
	int arr[] = { 4,2,8,7,5,9,1,3,0 };

	cout << "原来的数组为：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}

	
	// 冒泡排序

	// 外层循环——排序
	// 排序的总轮数 = 元素个数 - 1
	for (int i = 0; i < 9 - 1 ; i++)
	{
		//	内层循环——对比	
		//	当前轮次对比次数 = 元素个数 - 当前轮数 - 1
		//	每一轮的对比次数不同
		for (int j = 0; j <9 - i - 1 ; j++)
		{
			// 如果第一个数字比第二个大，则交换数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	cout << "排序后的结果：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
