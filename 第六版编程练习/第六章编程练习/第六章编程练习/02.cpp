#include<iostream>
#include<cctype>
using namespace std;
int main2()
{
	double num;
	double mean;
	cin>>num;
	cin.ignore();
	double arr[10];
	int i = 0;
	int N = 0;
	double sum = 0;
	while (num!=0 && i<10)//	����numΪdouble�ͣ����������������ַ��������Ϊ0�������и���������������������0��Ҳ��ֹͣѭ��
	{
		arr[i] =num;

		sum = sum + arr[i];
		i++;
		cin>>num;
		cin.ignore();
	}
	mean = sum / i;
	for (int j= 0; j < i; j++)
	{
		if (mean < arr[j])
			N = N + 1;
	}
	cout << "ƽ����Ϊ�� " << mean << ", �ҹ���" << N << "������ƽ������" << endl;
	system("pause");
	return 0;
}
