#include<iostream>
using namespace std;
/*
sizeof()�������������ռ�ڴ��С
�÷���sizeof(�������� or ����)
*/
int main2()
{
	short num1 = 10;
	cout << "short��ռ�ڴ��СΪ��" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int��ռ�ڴ��СΪ��" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "long��ռ�ڴ��СΪ��" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long long��ռ�ڴ��СΪ��" << sizeof(num4) << endl;
	// 
	cout << "���ۣ� short < int <= long <= long long" << endl;
	system("pause");
	return 0;
}