#include<iostream>
using namespace std;
const double km2mile = 62.14;
const double jl2s = 3.785;
int main()
{
	double Eur, US,a;
	cout << "������ŷ�޷�������ͺģ���ÿ100km���ĵ�������";// L/100 km
	cin >> Eur;

	US = km2mile  / (Eur/ jl2s);
	cout << "��Ӧ���������Ϊ��" << US << "mile/gas" << endl;
	system("pause");
	return 0;
}
