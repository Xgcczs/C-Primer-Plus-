#include<iostream>
using namespace std;
int main7()
{
	// ��ά����������;��
	// 1.���Բ鿴ռ�õ��ڴ��С
	int arr[2][3] = 
	{
		{1,2,3},
		{6,6,6}
	};

	cout <<  "��ά����ռ�õ��ڴ�ռ�Ϊ" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�ռ�Ϊ" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�ռ�Ϊ" << sizeof(arr[0][0]) << endl;
	cout << "��ά�����������" << sizeof(arr)/ sizeof(arr[0])<<"     ��ά�����������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


	
	//	2. ���Բ鿴��ά������׵�ַ
	cout << "��ά�����׵�ַ��" << arr << endl;
	cout << "��ά�����һ���׵�ַ��" << arr[0] << endl;
	cout << "��ά����ڶ����׵�ַ��" << arr[1] << endl;
	cout << "��ά�����һ��Ԫ���׵�ַ��" << &arr[0][0] << endl;
	cout << "��ά�����2��Ԫ���׵�ַ��" << &arr[0][1] << endl;
	system("pause");
	return 0;
}