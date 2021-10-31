#include<iostream>
using namespace std;

const int convert = 12;


int main1()
{
	int a,cun,chi;
	cout << "请输入您的身高：（单位：英寸）" ;
	cin >> a;

	chi = a / convert;
	cun = a % convert;
	cout << "您的身高为：" << cun << "英寸";
	cout << chi << "英尺" << endl;
	system("pause");
	return 0;
}
