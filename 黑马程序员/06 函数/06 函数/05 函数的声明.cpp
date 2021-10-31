#include<iostream>
using namespace std;
// 函数的声明
// 比较函数，返回两个数字中较大的值


// 提前告诉编译器函数的存在，可以利用函数的声明
//函数的声明
// 声明可以写多次，定义只能有一次
int max(int a, int b);



int main5()
{
	int a = 666;
	int b = 888;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

int max(int a, int b)
{
	return a > b ? a: b;
}