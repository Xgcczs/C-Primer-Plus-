#include<iostream>
#include<cstring>
using namespace std;
int main8()
{
	char words[50];
	int conter = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	while (strcmp(words, "done") != 0)
	{
		cin >> words;
		cin.get();
		conter++;
	}
	cout << "You entered a total of " << conter << " words." << endl;
	system("pause");
	return 0;
}
