#include<iostream>
using namespace std;
struct CandyBar
{
	char band[20];
	double weight;
	int kaluli;
};
int main6()
{
	CandyBar snack[3] =
	{
		{"�츣��",25.6,30},
		{"�����",64.5,35},
		{"��ܽ",23.4,55}
	};
	for (int i = 0; i < 3; i++)
	{
		cout << snack[i].band << " " << snack[i].weight << " " << snack[i].kaluli << endl;
	}
	system("pause");
	return 0;
}