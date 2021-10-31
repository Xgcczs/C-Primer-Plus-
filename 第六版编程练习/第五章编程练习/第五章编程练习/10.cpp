#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the number of rows: ";
	cin >> num;
	cin.get();
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i-1; j++)
		{
			cout << ".";
		}

		for (int k = 0;k<i+1;k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
