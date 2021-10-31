#include<iostream>
using namespace std;

void fun1();
void fun2();

int main3()
{
	fun1();
	fun1();
	fun2();
	fun2();
	system("pause");
	return 0;
}

void fun1()
{
	cout << "Three bline mice" << endl;
}
void fun2()
{
	cout << "See how they run" << endl;
}