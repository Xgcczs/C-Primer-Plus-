#include<iostream>
using namespace std;
int main()
{
	//1.字符型创建
	char a = 'a';
	cout << a << endl;

	//2.字符型所占内存空间
	cout << "char型所占内存空间为：" << sizeof(a) << endl;

	//3.字符型常见错误
	// char a = "a"	;			  //不能用双引号
	// char a ='abcdefg';		 //单引号只能引用一个字符
	
	//4.字符型对应ASCII编码
	//a -- 97
	//A -- 65
	cout << int(a) << endl;
	system("pause");
	return 0;
}