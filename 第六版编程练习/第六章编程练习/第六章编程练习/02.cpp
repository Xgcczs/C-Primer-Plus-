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
	while (num!=0 && i<10)//	由于num为double型，所以如果输入的是字符，结果将为0；但是有个问题就是如果想输入数字0则也会停止循环
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
	cout << "平均数为： " << mean << ", 且共有" << N << "个数比平均数大" << endl;
	system("pause");
	return 0;
}
