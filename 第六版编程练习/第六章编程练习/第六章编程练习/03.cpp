#include<iostream>
using namespace std;
int main3()
{
	cout << "Please enter one of the following choices: " << endl;
	cout << "c) carnivore              p) pianist" << endl;
	cout << "t) tree                   g) game" << endl;
	char a;
	cin.get(a);
	cin.ignore();
	while (a!='c'&& a != 'p' && a != 't' && a != 'g' )
	{
		cout << "Please enter a c, p, t, or g:";
		cin.get(a);
		cin.ignore();
	}
	switch (a)
		{
		case 'c':
			cout << "A maple is carnivore. " << endl;
			break;
		case 'p':
			cout << "A maple is pianist. " << endl;
			break;
		case 't':
			cout << "A maple is tree. " << endl;
			break;
		case 'g':
			cout << "A maple is game. " << endl;
			break;
		
		}	
	system("pause");
	return 0;
}
