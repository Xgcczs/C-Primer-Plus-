#include<iostream>
using namespace std;
int main5()
{
	//1. const修饰指针  常量指针
	// 指针指向的值不可以修改，指针的指向可以改
	int a = 10;
	int b = 10;

	const int* p = &a;
	//*p = 13; 
	p = &b;


	//2. const修饰常量  指针常量
	// 指针指向的值可以修改，指针的指向不可以改
	int* const p2 = &a;
	*p2 = 13;
	//p2 = &b;
	
	
	
	//3. const修饰指针和常量 
	// 指针指向的值不可以修改，指针的指向不可以改
	const int* const p3 = &a;
	//*p3 = 13;
	//p3 = &b;

	system("pause");
	return 0;
}