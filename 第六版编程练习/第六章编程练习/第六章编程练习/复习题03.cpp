#include<iostream>
using namespace std;
int main03()
{
	char ch;
	int ct1, ct2;
	ct1 = ct2 = 0;
	while ((ch=cin.get())!='$')
	{
		cout << ch;
		ct1++;
		if (ch = '$') //��ע�⡿�˴�Ϊ��ֵ��䣬��Ϊtrue
			ct2++;
		cout << ch;
	}
	cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
	system("pause");
	return 0;
}
