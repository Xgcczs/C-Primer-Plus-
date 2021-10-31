#include<iostream>
using namespace std;
int main2()
{
	// 指针所占的内存空间大小
	// 在32位操作系统下，不管什么数据类型，指针都占用4个字节空间；64位下占8个字节。

	int a = 666;
	int* p = &a;

	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;
	system("pause");
	return 0;
}