#include<iostream>
using namespace std;
int main3()
{
	//1.ǰ�õ���
	int a1 = 10;
	++a1;
	cout << a1 << endl;

	//2.���õ���
	int b1 = 10;
	b1++;
	cout << b1 << endl;

	//3.��������
	//ǰ�õ����� ���ñ���+1��Ȼ����б��ʽ����
	int a2 = 20;
	int b2 = ++a2 * 10;
	cout << a2 << endl;
	cout << b2 << endl;

	//���õ������ȶԱ��ʽ�������㣬���ñ���+1
	int a3 = 20;
	int b3 = a3++ * 10;
	cout << a3 << endl;
	cout << b3 << endl;
	system("pause");
	return 0;
}
