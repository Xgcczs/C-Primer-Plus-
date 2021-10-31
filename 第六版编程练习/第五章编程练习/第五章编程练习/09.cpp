#include<iostream>
#include<string>
using namespace std;
int main9()
{
	string words;
	int conter = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	while (words!= "done")
	{
		getline(cin,words);
		conter++;
	}
	cout << "You entered a total of " << conter << " words." << endl;
	system("pause");
	return 0;
}
