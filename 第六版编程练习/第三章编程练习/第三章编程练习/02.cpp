#include<iostream>
using namespace std;

const int foot2inch = 12;
const double inch2m = 0.0254;
const double kg2bang = 2.2;

int main2()
{
	int foot, inch;
	double bang;
	
	cout << "�������û�����ߣ�(��ʽ��xӢ��yӢ��)" << endl;
	cin >> foot;
	cin >> inch;
	cout << "�������û������أ�����λ������";
	cin >> bang;

	//����BMIָ��
	double height = foot * foot2inch + inch;
	height = height * inch2m;
	double wight = bang / kg2bang;
	double BMI = wight / (height * height);
	cout << "����û���BMIΪ�� " << BMI << endl;
	system("pause");
	return 0;
}
