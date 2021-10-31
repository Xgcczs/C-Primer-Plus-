#include<iostream>
using namespace std;
int main4()
{
	long long Seconds;
	int days, hours, minutes, seconds;
	cout << "Enter the number of seconds:";
	cin >> Seconds;
	days = Seconds / 86400;
	hours = (Seconds % 86400) / 3600;
	minutes = ((Seconds % 86400) % 3600) / 60;
	seconds = ((Seconds % 86400) % 3600) % 60;

	cout << Seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
	system("pause");
	return 0;
}
