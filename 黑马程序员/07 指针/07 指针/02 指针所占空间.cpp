#include<iostream>
using namespace std;
int main2()
{
	// ָ����ռ���ڴ�ռ��С
	// ��32λ����ϵͳ�£�����ʲô�������ͣ�ָ�붼ռ��4���ֽڿռ䣻64λ��ռ8���ֽڡ�

	int a = 666;
	int* p = &a;

	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;
	system("pause");
	return 0;
}