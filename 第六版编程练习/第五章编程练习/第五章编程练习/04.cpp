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
	cout << year << "���Cleo���ܽ��ᳬ��Daphne���ܽ��" << endl;
	cout << "Cleo�ܽ��Ϊ�� " << Cleo << endl;
	cout << "Daphne�ܽ��Ϊ�� " << Daphne << endl;
	system("pause");
	return 0;
}
