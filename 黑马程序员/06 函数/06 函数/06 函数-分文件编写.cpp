#include<iostream>
using namespace std;
# include"swap.h"

// �����ķ��ļ���д
// ʵ���������ֽ��н���

//// ����
//void Swap(int a, int b);

//// ����
//void Swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}


//1.����.h��׺����ͷ�ļ�
//2.����.cpp��׺����Դ�ļ�
//3.��ͷ�ļ���д����������
//4.��Դ�ļ���д�����Ķ���


int main()
{
	int a = 44;
	int b = 55;
	Swap(a, b);
	system("pause");
	return 0;
}