#include<iostream>
using namespace std;

// ֵ����
// ���庯����ʵ���������ּ���н���

// �����������Ҫ����ֵ����������ʱ�������void
void swap(int num1, int num2)
{
	cout << "����ǰ" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1; 
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

int main3()
{
	int a = 10;
	int b = -1;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	// ��������ֵ����ʱ���������βη����仯����Ӱ�쵽ʵ��
	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}
