#include<iostream>
using namespace std;
// �ṹ��ָ��
struct student
{
	string name;
	int age;
	int score;
};
int main3()
{
	// 1.����ѧ���ṹ�����
	 student s = { "�ϰ�",38,66 };

	//	2.ͨ��ָ��ָ��ṹ�����
	 student* p = &s;

	//	3.ͨ��ָ����ʽṹ������е�����
	 cout << "������" << p->name << "����: " << p->age << "����: " << p->score << endl;
	system("pause");
	return 0;
}
