#include<iostream>
using namespace std;
int main()
{
	//1.�ַ��ʹ���
	char a = 'a';
	cout << a << endl;

	//2.�ַ�����ռ�ڴ�ռ�
	cout << "char����ռ�ڴ�ռ�Ϊ��" << sizeof(a) << endl;

	//3.�ַ��ͳ�������
	// char a = "a"	;			  //������˫����
	// char a ='abcdefg';		 //������ֻ������һ���ַ�
	
	//4.�ַ��Ͷ�ӦASCII����
	//a -- 97
	//A -- 65
	cout << int(a) << endl;
	system("pause");
	return 0;
}