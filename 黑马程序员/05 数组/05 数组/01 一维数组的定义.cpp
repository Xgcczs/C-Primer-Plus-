#include<iostream>
using namespace std;
int main1()
{
	// 数组的定义

	/*
		1. 数据类型 数组名[ 数组长度 ]
		2. 数据类型 数组名[ 数组长度 ] = {val_1，val_2，...}；
		3. 数据类型 数组名[ ] = {val_1，val_2，...}；
	*/

	// 1.
	cout << "方法1：" << endl;
	int array[4];
	array[0] = 111;
	array[1] = 222;
	array[2] = 555;
	array[3] = 786;

	for (int i = 0; i < 4; i++)
	{
		cout << array[i] << endl;
	}

	//	2. 【注意】如果在初始化时，没有全部填完，则会用0来补全。
	cout <<endl<< "方法2：" << endl;
	int array2[4] = { 0,1,3,4 };
	for (int i = 0; i < 4; i++)
	{
		cout << array2[i] << endl;
	}
	
	//	3.【注意】定义数组时，必须有初始长度
	cout << endl<<"方法3："<<endl;
	int array3[] = { 666,888,234,00 };
	for (int i = 0; i < 4; i++)
	{
		cout << array3[i] << endl;
	}
	system("pause");
	return 0;
}
