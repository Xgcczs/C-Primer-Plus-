#include<iostream>
using namespace std;
const double km2mile = 62.14;
const double jl2s = 3.785;
int main()
{
	double Eur, US,a;
	cout << "请输入欧洲风格汽车油耗：（每100km消耗的油量）";// L/100 km
	cin >> Eur;

	US = km2mile  / (Eur/ jl2s);
	cout << "对应的美国风格为：" << US << "mile/gas" << endl;
	system("pause");
	return 0;
}
