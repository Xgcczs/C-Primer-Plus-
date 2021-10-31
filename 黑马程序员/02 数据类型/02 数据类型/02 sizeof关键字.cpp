#include<iostream>
using namespace std;
/*
sizeof()获得数据类型所占内存大小
用法：sizeof(数据类型 or 变量)
*/
int main2()
{
	short num1 = 10;
	cout << "short所占内存大小为：" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int所占内存大小为：" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "long所占内存大小为：" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long long所占内存大小为：" << sizeof(num4) << endl;
	// 
	cout << "结论： short < int <= long <= long long" << endl;
	system("pause");
	return 0;
}