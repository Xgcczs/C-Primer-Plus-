#include<iostream>
using namespace std;
int main6()
{
	//三目运算符
	int a, b, c;
	//创建a、b、c，将a、b中大的数赋值给c
	a = 666;
	b = 888;

	c = (a > b ? a : b);
	// 【注意】 C++中，三目运算符返回的是变量，可以继续赋值

	(a > b ? a : b) = -1;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}
