#include<iostream>
using namespace std;
int main5()
{
	long long global_population,American_population;
	cout << "Enter the world's population:";
	cin >> global_population;
	cout << "Enter the American population:";
	cin >> American_population;
	cout << "The population of the US is " << double(American_population) / double(global_population) * 100 << "% of the world population." << endl;
	system("pause");
	return 0;
}
