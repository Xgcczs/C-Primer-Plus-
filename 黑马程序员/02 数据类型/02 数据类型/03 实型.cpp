#include<iostream>
using namespace std;

int main3()
{
	//1.������	float
	//2.˫����	double
	// Ĭ�����Ϊ6λ����
	float f1 = 3.141592653f;
	cout << "f1 = " << f1 << endl;
	cout << "float ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(float) << endl;

	double d1 = 3.141592653;
	cout << "d1 = " << d1 << endl;
	cout << "double ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(d1) << endl;
	// ��ѧ������ ��ʾС��
	float f2 = 3e2;
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2;
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;
}