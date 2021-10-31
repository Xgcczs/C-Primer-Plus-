#include<iostream>
using namespace std;
int main2()
{
	cout << "请输入一个以long为单位的距离：" << endl;
	double a,b; // 输入有可能是小数，所以最好不要int
	cin >> a;
	b = 220 * a;
	cout << "该距离等于" << b << "码" << endl;

	system("pause");
	return 0;
}
