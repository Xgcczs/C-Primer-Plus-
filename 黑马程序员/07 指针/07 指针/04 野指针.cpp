#include<iostream>
using namespace std;
int main4()
{
	// 野指针
	// 在程序中避免出现野指针
	int* p =(int *) 0x1100;


	// 空指针、野指针都不可以随意访问
	system("pause");
	return 0;
}