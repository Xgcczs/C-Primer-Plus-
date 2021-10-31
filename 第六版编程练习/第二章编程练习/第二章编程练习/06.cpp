#include<iostream>
using namespace std;
double convert1(double year);
int main6()
{
	double a, b;
	cout << "Enter the number of light years: ";
	cin >> a;
	b = convert1(a);
	cout << a << " light year = " << b << " asstronomical units." << endl;
	system("pause");
	return 0;
}

double convert1(double year)
{
	return year * 63240;
}