#include<iostream>
using namespace std;

int main3()
{
	//1.单精度	float
	//2.双精度	double
	// 默认输出为6位数字
	float f1 = 3.141592653f;
	cout << "f1 = " << f1 << endl;
	cout << "float 所占用的内存空间为：" << sizeof(float) << endl;

	double d1 = 3.141592653;
	cout << "d1 = " << d1 << endl;
	cout << "double 所占用的内存空间为：" << sizeof(d1) << endl;
	// 科学计数法 表示小数
	float f2 = 3e2;
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2;
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;
}