#include<iostream>
#include<string>
using namespace std;
struct car
{
	string company;
	int year;
};
int main7()
{
	int num;
	cout << "How many cars do you wish to catalog? " ;
	cin >> num;

	car* che = new car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the maker: ";
		cin.get();
		/*
		��ע�⡿cin�����һ���س������º�����δ������Ѿ�ִ�У������Ҫͨ������cin.get()��cin.ignore()��������
		cin ֻ������Ż�ִ��;
		getline() ֻҪ�س��ͻ�ִ�У�
		*/ 
		getline(cin, che[i].company);
		cout << "Please enter the year mode:";
		cin >> che[i].year;

	}

	cout << "Here is you collection: " << endl;
	for (int j = 0; j < num; j++)
	{
		cout << che[j].year << " " << che[j].company << endl;
	}
	system("pause");
	return 0;
}
