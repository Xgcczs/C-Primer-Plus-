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
	cout << "������������˾������: "<< endl;
	cin.getline(p1.Name, 50);
	cout << "������������ֱ��: " << endl;
	cin >> p1.zhi_jing;
	cout << "����������������: " << endl;
	cin >> p1.zhi_liang;
	
	cout << p1.Name << "��˾������ֱ��Ϊ" << p1.zhi_jing << "������Ϊ" << p1.zhi_liang << endl;

	system("pause");
	return 0;
}
