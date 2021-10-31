#include<iostream>
using namespace std;
int main15()
{
	int k ;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			k = i * j;
			cout << j << "*" << i << " = " << k ;
			cout << "   ";
			if (i == j)
			{
				break;
			}
		
		}
		cout << endl;
	}
	system("pause");
	return 0;
}