#include<iostream>
using namespace std;
int main5()
{
	
	int arr[] = { 4,2,8,7,5,9,1,3,0 };

	cout << "ԭ��������Ϊ��" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}

	
	// ð������

	// ���ѭ����������
	// ����������� = Ԫ�ظ��� - 1
	for (int i = 0; i < 9 - 1 ; i++)
	{
		//	�ڲ�ѭ�������Ա�	
		//	��ǰ�ִζԱȴ��� = Ԫ�ظ��� - ��ǰ���� - 1
		//	ÿһ�ֵĶԱȴ�����ͬ
		for (int j = 0; j <9 - i - 1 ; j++)
		{
			// �����һ�����ֱȵڶ������򽻻�����
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	cout << "�����Ľ����" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
