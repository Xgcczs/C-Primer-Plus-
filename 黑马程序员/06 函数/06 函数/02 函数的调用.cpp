#include<iostream>
using namespace std;

int add(int num1, int num2)// num1,num2并不是真实数据，是形参
{
	int sum = num1 + num2;
	return sum;
}
int main2()
{
	//调用add函数
	int a = 10;
	int b = 20;

	int y = add(a, b);//a,b是真实数据，是实参
	cout << y << endl;


	system("pause");
	return 0;
}

