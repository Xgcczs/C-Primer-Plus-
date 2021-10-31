#include<iostream>
using namespace std;
int main7()
{
	// 二维数组名称用途：
	// 1.可以查看占用的内存大小
	int arr[2][3] = 
	{
		{1,2,3},
		{6,6,6}
	};

	cout <<  "二维数组占用的内存空间为" << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存空间为" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用的内存空间为" << sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数：" << sizeof(arr)/ sizeof(arr[0])<<"     二维数组的列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


	
	//	2. 可以查看二维数组的首地址
	cout << "二维数组首地址：" << arr << endl;
	cout << "二维数组第一行首地址：" << arr[0] << endl;
	cout << "二维数组第二行首地址：" << arr[1] << endl;
	cout << "二维数组第一个元素首地址：" << &arr[0][0] << endl;
	cout << "二维数组第2个元素首地址：" << &arr[0][1] << endl;
	system("pause");
	return 0;
}