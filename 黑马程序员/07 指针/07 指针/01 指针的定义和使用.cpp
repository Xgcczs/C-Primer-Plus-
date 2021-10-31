#include<iostream>
using namespace std;
int main1()
{
// 可以通过指针来保存一个地址

	// 1. 定义指针
	int a = 10;
	int* p;//	指针定义的语法： 数据类型* 指针变量
	p = &a;//	让指针记录变量a的地址
	cout << "a的地址为：" << p << endl;


	// 2. 使用指针
	// 可以通过解引用的方式来找到指针指向的内存
	*p = 666;// 指针前加 * 代表解引用，找到指针指向的内存中的数据
	cout << "a = " << a<<endl;

	system("pause");
	return 0;
}