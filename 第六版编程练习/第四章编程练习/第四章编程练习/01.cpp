#include<iostream>
#include<string>
using namespace std;
int main1()
{
	string first_name, last_name;
	char grade;
	int age;
	cout << "What is your first name? ";
	getline(cin, first_name);	// 【注意】getline（cin，string）是对string进行输入，遇到空格不会结束
	cout << "What is your last name? ";
	getline(cin, last_name);
	cout << "What letter grade do you deserve? ";
	cin.get(grade);	//【注意】cin.get（char）对char进行输入，遇到空格不会结束
	cout << "What is your age? ";
	cin>>age;	//【注意】cin遇到空格会结束

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(int(grade)+1) << endl;
	cout << "Age: " << age << endl;

	system("pause");
	return 0;
}