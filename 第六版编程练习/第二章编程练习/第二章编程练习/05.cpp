#include<iostream>
using namespace std;
double convert(double C);

int main5()
{
	cout << "Please enter a Celsius value:";
	double a,b;
	cin >> a;
	b = convert(a);
	cout << a << " degrees Celsius is " << b << " degrees Fahrenheit." << endl;
	system("pause");
	return 0;
}

double convert(double C)
{
	double F = 1.8 * C + 32.0;
	return F;
}