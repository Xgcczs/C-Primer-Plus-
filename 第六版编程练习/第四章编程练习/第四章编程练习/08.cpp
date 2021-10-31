#include<iostream>
using namespace std;

struct pisa
{
	char Name[50];
	int zhi_jing;
	float zhi_liang;
};

int main8()
{
	pisa* p = new pisa;	//	new 为变量请求内存
	cout << "请输入披萨公司的名称: " << endl;
	cin.getline(p->Name, 50);
	cout << "请输入披萨的直径: " << endl;
	cin >> p->zhi_jing;
	cout << "请输入披萨的重量: " << endl;
	cin >> p->zhi_liang;

	cout << p->Name << "公司的披萨直径为" << p->zhi_jing << "，重量为" << p->zhi_liang << endl;

	system("pause");
	return 0;
}
