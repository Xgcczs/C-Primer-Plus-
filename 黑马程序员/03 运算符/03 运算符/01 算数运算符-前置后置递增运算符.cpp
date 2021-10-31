#include<iostream>
using namespace std;
int main3()
{
	//1.前置递增
	int a1 = 10;
	++a1;
	cout << a1 << endl;

	//2.后置递增
	int b1 = 10;
	b1++;
	cout << b1 << endl;

	//3.两者区别
	//前置递增： 先让变量+1，然后进行表达式运算
	int a2 = 20;
	int b2 = ++a2 * 10;
	cout << a2 << endl;
	cout << b2 << endl;

	//后置递增：先对表达式进行运算，后让变量+1
	int a3 = 20;
	int b3 = a3++ * 10;
	cout << a3 << endl;
	cout << b3 << endl;
	system("pause");
	return 0;
}
