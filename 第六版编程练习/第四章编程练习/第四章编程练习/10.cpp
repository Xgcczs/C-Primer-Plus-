#include<iostream>
using namespace std;
int main()
{
	float time[4];
	cout << "����������40m�ܵĳɼ���"<<endl;
	cin >> time[0];
	cin >> time[1];
	cin >> time[2];
	time[4] = (time[0] + time[1] + time[2]) / 3;

	for (int i = 0; i < 3; i++)
	{
		cout << "40m�ܵ�" << i + 1 << "�εĳɼ�Ϊ" << time[i] << endl;
	}
	cout << "ƽ���ɼ�Ϊ�� " << time[4] << endl;
	system("pause");
	return 0;
}