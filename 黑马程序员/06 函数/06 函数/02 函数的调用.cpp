#include<iostream>
using namespace std;

int add(int num1, int num2)// num1,num2��������ʵ���ݣ����β�
{
	int sum = num1 + num2;
	return sum;
}
int main2()
{
	//����add����
	int a = 10;
	int b = 20;

	int y = add(a, b);//a,b����ʵ���ݣ���ʵ��
	cout << y << endl;


	system("pause");
	return 0;
}

