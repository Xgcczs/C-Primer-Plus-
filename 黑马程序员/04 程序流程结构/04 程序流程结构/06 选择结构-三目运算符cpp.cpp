#include<iostream>
using namespace std;
int main6()
{
	//��Ŀ�����
	int a, b, c;
	//����a��b��c����a��b�д������ֵ��c
	a = 666;
	b = 888;

	c = (a > b ? a : b);
	// ��ע�⡿ C++�У���Ŀ��������ص��Ǳ��������Լ�����ֵ

	(a > b ? a : b) = -1;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}
