#include<iostream>
using namespace std;
void time(int a,int b);

int main()
{
	int h, m;
	cout << "Enter the number of hours: ";
	cin >> h;
	cout << "Enter the number of munites: ";
	cin >> m;

	time(h,m);
	system("pause");
	return 0;
}
void time(int a,int b)
{
	cout <<"Time: " << a << ":" << b << endl;
}