#include<iostream>
using namespace std;

// ����������ʽ
//  1.�޲��޷�
void test01()
{
	cout << "�޲��޷�" << endl;
}
//	2.�в��޷�
void test02(int a)
{
	cout << a << endl;
}
//	3.�޲��з�
int test03()
{
	return 666;
}
//	4.�в��з�
int test04(int a)
{
	return a;
}
int main4()
{
	
	//  1.�޲��޷�����
	test01();
	//	2.�в��޷�����
	test02(6);
	//	3.�޲��з�����
	int num1 = test03();
	cout << num1 << endl;
	//	4.�в��з�����
	int num2 = test04(888);
	cout << num2 << endl;

	system("pause");
	return 0;
}