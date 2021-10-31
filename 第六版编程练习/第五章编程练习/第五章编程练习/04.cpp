#include<iostream>
using namespace std;
int main4()
{
	double ben_jin = 100;
	double Daphne=100;
	int year=1;
	double	Cleo=100;
	while(Daphne >= Cleo)//
	{
		Daphne = Daphne + 0.1*ben_jin;
		Cleo = Cleo + 0.05 * Cleo;
		year++;
	}
	cout << year << "年后，Cleo的总金额会超过Daphne的总金额" << endl;
	cout << "Cleo总金额为： " << Cleo << endl;
	cout << "Daphne总金额为： " << Daphne << endl;
	system("pause");
	return 0;
}
