#include<iostream>
#include<cstring>
using namespace std;
int main3()
{
	char first_name[20], last_name[20];	//尽量使用char数组而不是string
	char name[40];
	cout << "Enter your first name: ";
	cin.getline(first_name,20);
	cout << "Enter your last name: ";
	cin.getline(last_name,20);

	strcpy_s(name, last_name);	//strcpy(s1,s2)
	strcat_s(name,",");			//strcat(s1,s2)
	strcat_s(name, first_name);
	cout << "Here is the information in a single string: " << name << endl;
	system("pause");
	return 0;
}
