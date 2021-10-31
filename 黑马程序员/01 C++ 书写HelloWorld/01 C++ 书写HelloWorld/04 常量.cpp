#include<iostream>
using namespace std;
#define Year 2021

int main3() 
{
	//常量的定义方式
	//1.#define 宏常量（一般在函数外部）

	cout << "今年是" << Year <<"年" << endl;


	//2.const修饰的变量（函数内部）
	const int month = 12;
	cout << "一年有" << month <<"个月" << endl;

	//【注意】 常量不能被赋值	
	system("pause");
	return 0;
}