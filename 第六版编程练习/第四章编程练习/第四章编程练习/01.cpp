#include<iostream>
#include<string>
using namespace std;
int main1()
{
	string first_name, last_name;
	char grade;
	int age;
	cout << "What is your first name? ";
	getline(cin, first_name);	// ��ע�⡿getline��cin��string���Ƕ�string�������룬�����ո񲻻����
	cout << "What is your last name? ";
	getline(cin, last_name);
	cout << "What letter grade do you deserve? ";
	cin.get(grade);	//��ע�⡿cin.get��char����char�������룬�����ո񲻻����
	cout << "What is your age? ";
	cin>>age;	//��ע�⡿cin�����ո�����

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(int(grade)+1) << endl;
	cout << "Age: " << age << endl;

	system("pause");
	return 0;
}