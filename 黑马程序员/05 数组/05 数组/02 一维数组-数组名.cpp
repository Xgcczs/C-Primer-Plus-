#include<iostream>
using namespace std;
int main2()
{
	// ����������;
	//	1.����ͨ��������ͳ����������ռ�õ��ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "����������ռ�õ��ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�õ��ڴ�ռ�Ϊ�� " << sizeof(arr[6]) << endl;
	cout << "����������������Ԫ�ظ���Ϊ�� " << sizeof(arr) / sizeof(arr[6]) << endl;
	//	2.����ͨ���������鿴�����׵�ַ

	cout << "������׵�ַΪ��" << arr << endl;
	cout << "����ĵ�һ��Ԫ�صĵ�ַΪ��" << &arr[0] << endl;
	cout << "����ĵڶ���Ԫ�صĵ�ַΪ��" << &arr[1] << endl;

	// ��ע�⡿ �������ǳ����������Ը�ֵ
	system("pause");
	return 0;
}
