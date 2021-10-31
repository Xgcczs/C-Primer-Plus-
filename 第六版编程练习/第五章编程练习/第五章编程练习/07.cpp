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
		【注意】cin会产生一个回车，导致后续还未输入就已经执行；因此需要通过加入cin.get()或cin.ignore()来消除。
		cin 只有输入才会执行;
		getline() 只要回车就会执行；
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
