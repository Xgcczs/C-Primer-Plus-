#include<iostream>
using namespace std;
#include<string>
// 1.����ѧ���������ͣ� ѧ�����������������䣬������
// �Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
// �﷨  struct ��������{ ��Ա�б� }
struct student 
{
	//��Ա�б�
	string name;
	int age;
	int score;
}s3;	// ˳�㴴���ṹ�����

//	2.ͨ��ѧ�����ʹ�������ѧ��


int main1()
{
//  2.1 struct student s1
	struct student s1; // �����ṹ��ʱ��struct����ʡ�ԣ�����ʱ������ʡ��
	s1.name = "�ϰ�";	// ��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.age = 38;
	s1.score = 88;

	cout << "������" << s1.name << "����: " << s1.age << "����: " << s1.score << endl;
//  2.2 struct student s2 = { val1,val2,... }
	struct student s2 = { "giao",40,100 };
	cout << "������" << s2.name << "����: " << s2.age << "����: " << s2.score << endl;



//	2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ����� ����13��
	s3.name = "����";
	s3.age = 38;
	s3.score = 0;
	cout << "������" << s3.name << "����: " << s3.age << "����: " << s3.score << endl;
	system("pause");
	return 0;
}
