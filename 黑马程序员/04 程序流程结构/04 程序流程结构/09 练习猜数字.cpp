#include<iostream>
using namespace std;

//timeϵͳʱ��ͷ�ļ�
#include<ctime>

int main9()
{
	//�������1~100����
	
	//�����������ӣ����������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	int rand_num,num;
	rand_num = rand() % 100 + 1;// rand()%100 ����0-99�������

	num = 0;

	while (num != rand_num)
	{
		cout << "������һ��1-100������" << endl;
		cin >> num;
		if (num > rand_num)
		{
			cout << "̫���ˣ�����������" << endl;
		}
		else if (num < rand_num)
		{
			cout << "̫С�ˣ�����������" << endl;
		}
		else 
		{
			cout << "��ϲ�㣬�¶��ˣ�" << endl;
		}	
	}
	cout << "��ϵͳ���ɵ������Ϊ����"<<rand_num << endl;
	system("pause");
	return 0;
}
