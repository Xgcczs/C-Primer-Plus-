#include<iostream>
using namespace std;
// ����������
// �ȽϺ������������������нϴ��ֵ


// ��ǰ���߱����������Ĵ��ڣ��������ú���������
//����������
// ��������д��Σ�����ֻ����һ��
int max(int a, int b);



int main5()
{
	int a = 666;
	int b = 888;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

int max(int a, int b)
{
	return a > b ? a: b;
}