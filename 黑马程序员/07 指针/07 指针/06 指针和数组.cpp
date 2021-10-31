#include<iostream>
using namespace std;
int main6()
{
	// 指针和数组
	// 利用指针访问数组中的元素
	int arr[] = { 2,3,5,7,4,9,7,6,5 };
	int* p = arr;//arr数组名就是数组的首地址
	for (int i = 0; i < 9; i++)
	{
		cout << "利用指针访问第" << i + 1 << "个元素为：" << *p << endl;
		p++;//指针偏移
	}
	
	system("pause");
	return 0;
}
