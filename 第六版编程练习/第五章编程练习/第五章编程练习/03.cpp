#include<iostream>
using namespace std;
int main3()
{
	float i;
	float sum = 0;
	do
	{
		cout << "����һ������:" << endl;
		cin >> i;
		if (i != 0)
		{
			sum += i;
			cout << "����ĿǰΪֹ���ۼƺ�Ϊ�� " << sum<<endl;
		}
		else
		{
			break;
		}
	} while (1);
	cout << "����������ۼ��ܺ�Ϊ�� " << sum << endl;

	system("pause");
	return 0;
}
