#include<iostream>
using namespace std;
int main6()
{
	// ָ�������
	// ����ָ����������е�Ԫ��
	int arr[] = { 2,3,5,7,4,9,7,6,5 };
	int* p = arr;//arr����������������׵�ַ
	for (int i = 0; i < 9; i++)
	{
		cout << "����ָ����ʵ�" << i + 1 << "��Ԫ��Ϊ��" << *p << endl;
		p++;//ָ��ƫ��
	}
	
	system("pause");
	return 0;
}
