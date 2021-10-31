#include<iostream>
using namespace std;
int main3()
{
	int a, b, c;
	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degree: ";
	cin >> a;
	cout << "Secondly, enter the minutes of arc: ";
	cin >> b;
	cout << "Thirdly, enter the seconds of arc: ";
	cin >> c;

	double degrees = a + double(b )/ 60 + double(c) / 3600;
	// ¡¾×¢Òâ¡¿
	cout << a << " degrees, " << b << " minutes, " << c << " seconds = " << degrees << " degrees" << endl;
	system("pause");
	return 0;
}
