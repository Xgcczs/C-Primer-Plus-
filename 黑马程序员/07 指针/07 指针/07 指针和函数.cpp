#include<iostream>
using namespace std;

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;


}
int main7()
{

	// 1.ֵ���� ���ı�ʵ��

	// 2.��ַ���� �ı�ʵ��
	int a = 10;
	int b = -66;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(&a, &b);

	cout << "swap a = " << a << endl;
	cout << "swap b = " << b << endl;

	system("pause");
	return 0;
}
