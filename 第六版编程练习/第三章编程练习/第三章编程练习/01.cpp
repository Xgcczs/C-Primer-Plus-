#include<iostream>
using namespace std;

const int convert = 12;


int main1()
{
	int a,cun,chi;
	cout << "������������ߣ�����λ��Ӣ�磩" ;
	cin >> a;

	chi = a / convert;
	cun = a % convert;
	cout << "�������Ϊ��" << cun << "Ӣ��";
	cout << chi << "Ӣ��" << endl;
	system("pause");
	return 0;
}
