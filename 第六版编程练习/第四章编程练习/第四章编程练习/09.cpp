#include<iostream>
#include<cstring>
using namespace std;
struct CandyBar
{
	char band[20];
	double weight;
	int kaluli;
};
int main9()
{
	CandyBar* p = new CandyBar[3];
	strcpy_s(p[0].band,"Ðì¸£¼Ç");
	p[0].weight = 2.4;
	p[0].kaluli = 33;
	strcpy_s(p[1].band, "µÂÜ½");
	p[1].weight = 6.6;
	p[1].kaluli = 45;
	strcpy_s(p[2].band, "´ó°×ÍÃ");
	p[2].weight = 8.9;
	p[2].kaluli = 73;

	for (int i = 0; i < 3; i++)
	{
		cout << p->band << " " << p->weight << " " << p->kaluli << endl;
		p++;
	}
	system("pause");
	return 0;
}