#include<iostream>
using namespace std;
// �ṹ������
// 1. ����ṹ��
struct Student
{
	string name;
	int age;
	int score;
};

int main()
{
// 2.�����ṹ��
	struct Student stuArr[3] =
	{
		{"�ϰ�",38,66},
		{"giao",26,86},
		{"����",48,6}
	};

// 3. ���ṹ�������е�Ԫ�ظ�ֵ
	stuArr[2].name = "����";
	stuArr[2].age = 45;
	stuArr[2].score = 0;
// 4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuArr[i].name << "����: " << stuArr[i].age << "����: " << stuArr[i].score << endl;
	}

	system("pause");
	return 0;
}
