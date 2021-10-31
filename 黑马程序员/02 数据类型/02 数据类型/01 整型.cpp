#include<iostream>
using namespace std;

/*
数据类型存在的意义： 给变量分配合适的内存空间
*/
int main1()
{
	// 整型
	// 1.短整型 [-32768, 32767]
	short num1 = 32768;
	// 2.整型
	int num2 = 10;
	// 3.长整型
	long num3 = 10;
	// 4.长长整型
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	system("pause");
	return 0;
}