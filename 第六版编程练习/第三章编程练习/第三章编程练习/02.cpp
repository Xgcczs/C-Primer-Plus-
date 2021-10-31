#include<iostream>
using namespace std;

const int foot2inch = 12;
const double inch2m = 0.0254;
const double kg2bang = 2.2;

int main2()
{
	int foot, inch;
	double bang;
	
	cout << "请输入用户的身高：(格式：x英尺y英寸)" << endl;
	cin >> foot;
	cin >> inch;
	cout << "请输入用户的体重：（单位：磅）";
	cin >> bang;

	//计算BMI指数
	double height = foot * foot2inch + inch;
	height = height * inch2m;
	double wight = bang / kg2bang;
	double BMI = wight / (height * height);
	cout << "这个用户的BMI为： " << BMI << endl;
	system("pause");
	return 0;
}
