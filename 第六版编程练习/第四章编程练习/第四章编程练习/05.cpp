#include<iostream>
using namespace std;
struct CandyBar
{
	char band[20];
	double weight;
	int kaluli;
};
int main5()
{
	CandyBar snack = {"Mocha munch", 2.3, 350};	// �����ṹ�岢��ʼ��
	cout << snack.band <<" " << snack.weight <<" "<<  snack.kaluli << endl;
	system("pause");
	return 0;
}
