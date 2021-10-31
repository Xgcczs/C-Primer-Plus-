#include<iostream>
using namespace std;

// 函数常见形式
//  1.无参无返
void test01()
{
	cout << "无参无返" << endl;
}
//	2.有参无返
void test02(int a)
{
	cout << a << endl;
}
//	3.无参有返
int test03()
{
	return 666;
}
//	4.有参有返
int test04(int a)
{
	return a;
}
int main4()
{
	
	//  1.无参无返调用
	test01();
	//	2.有参无返调用
	test02(6);
	//	3.无参有返调用
	int num1 = test03();
	cout << num1 << endl;
	//	4.有参有返调用
	int num2 = test04(888);
	cout << num2 << endl;

	system("pause");
	return 0;
}