#include<iostream>
using namespace std;
#include<string>
int main()
{
	int zongfen ;
	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string name[3] = {"�ϰ�","giao��","����ʦ"};
	for (int i = 0; i < 3; i++)
	{
		zongfen = 0;

		for (int j = 0; j < 3; j++)
		{
			zongfen += score[i][j];
		}
		cout << name[ i ] << "���ܳɼ�Ϊ��" << zongfen << endl;
		
	}
	system("pause");
	return 0;
}