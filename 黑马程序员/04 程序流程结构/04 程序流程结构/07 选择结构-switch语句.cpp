#include<iostream>
using namespace std;
int main7()
{
	// switch ���
	// switchȱ�㣺�ж�ʱֻ�������ͻ����ַ��ͣ�������һ������
	//		 �ŵ㣺�ṹ������ִ��Ч�ʸ�
	cout << "���������֣�" << endl;
	int score;
	cin >> score;

	switch (score)
	{
	case 10:
		cout << "����" << endl; 
		break;
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "����" << endl;
		break;
	case 7:
		cout << "����" << endl;
		break;
	case 6:
		cout << "һ��" << endl;
		break;
	case 5:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}

	system("pause");
	return 0;
}
