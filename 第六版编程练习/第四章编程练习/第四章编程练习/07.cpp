#include<iostream>
using namespace std;

struct pisa 
{
	char Name[50];
	int zhi_jing;
	float zhi_liang;
};

int main7()
{
	pisa p1;
	cout << "请输入披萨公司的名称: "<< endl;
	cin.getline(p1.Name, 50);
	cout << "请输入披萨的直径: " << endl;
	cin >> p1.zhi_jing;
	cout << "请输入披萨的重量: " << endl;
	cin >> p1.zhi_liang;
	
	cout << p1.Name << "公司的披萨直径为" << p1.zhi_jing << "，重量为" << p1.zhi_liang << endl;

	system("pause");
	return 0;
}
