#include<iostream>
using namespace std;
int main5()
{
	//1. const����ָ��  ����ָ��
	// ָ��ָ���ֵ�������޸ģ�ָ���ָ����Ը�
	int a = 10;
	int b = 10;

	const int* p = &a;
	//*p = 13; 
	p = &b;


	//2. const���γ���  ָ�볣��
	// ָ��ָ���ֵ�����޸ģ�ָ���ָ�򲻿��Ը�
	int* const p2 = &a;
	*p2 = 13;
	//p2 = &b;
	
	
	
	//3. const����ָ��ͳ��� 
	// ָ��ָ���ֵ�������޸ģ�ָ���ָ�򲻿��Ը�
	const int* const p3 = &a;
	//*p3 = 13;
	//p3 = &b;

	system("pause");
	return 0;
}