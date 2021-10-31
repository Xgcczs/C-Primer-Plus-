#include<iostream>
using namespace std;
int main6()
{
	double y, x;
	cout << "请输入驱车里程y（单位km）和汽油使用量x（单位：升）: " << endl;
	cin >> y;
	cin >> x;
	cout << "每100km耗油量为：" << y / x *100<< endl;
	system("pause");
	return 0;
}
