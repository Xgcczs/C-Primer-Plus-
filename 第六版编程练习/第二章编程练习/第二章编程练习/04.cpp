#include<iostream>
using namespace std;

int month(int a);

int main4()
{
	int a,b;
	
	cout << "Enter your age:" << endl;
	cin >> a;
	b = month(a);
	cout << "Your age include " << b << " months" << endl;
	system("pause");
	return 0;
}

int month(int a)
{
	 int b = a * 12;
	 return b;
}