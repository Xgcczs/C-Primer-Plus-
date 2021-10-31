#include<iostream>
using namespace std;
int main2()
{
	// 数组名的用途
	//	1.可以通过数组名统计整个数组占用的内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "整个数组所占用的内存空间为： " << sizeof(arr) << endl;
	cout << "每个元素所占用的内存空间为： " << sizeof(arr[6]) << endl;
	cout << "整个数组所包含的元素个数为： " << sizeof(arr) / sizeof(arr[6]) << endl;
	//	2.可以通过数组名查看数组首地址

	cout << "数组的首地址为：" << arr << endl;
	cout << "数组的第一个元素的地址为：" << &arr[0] << endl;
	cout << "数组的第二个元素的地址为：" << &arr[1] << endl;

	// 【注意】 数组名是常量，不可以赋值
	system("pause");
	return 0;
}
