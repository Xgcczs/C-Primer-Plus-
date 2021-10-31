#include<iostream>
using namespace std;
#include<string>

int main5()
{
	// 1. C风格字符串
	//【注意】中括号、双引号
	char str1[] = "What's up";
	cout << str1 << endl;

	// 2. C++风格字符串  
	// 【注意】要包含头文件
	string str2 = "What's up!";
	cout << str2 << endl;
	system("pause");
	return 0;

}