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
	pisa* p = new pisa;	//	new Ϊ���������ڴ�
	cout << "������������˾������: " << endl;
	cin.getline(p->Name, 50);
	cout << "������������ֱ��: " << endl;
	cin >> p->zhi_jing;
	cout << "����������������: " << endl;
	cin >> p->zhi_liang;

	cout << p->Name << "��˾������ֱ��Ϊ" << p->zhi_jing << "������Ϊ" << p->zhi_liang << endl;

	system("pause");
	return 0;
}
