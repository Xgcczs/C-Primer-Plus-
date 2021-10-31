#include<iostream>
using namespace std;
int main3()
{
	// 一个数组中包含了五个小猪的体重，打印最重的小猪的体重
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

	cout <<"最重的猪的体重为：" << Max << endl;
	system("pause");
	return 0;
}