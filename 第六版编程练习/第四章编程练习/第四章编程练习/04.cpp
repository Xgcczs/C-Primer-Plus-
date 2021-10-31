#include<iostream>
#include<string>
using namespace std;
int main4()
{
	string first_name, last_name;	//尽量使用char数组而不是string
	string name;
	cout << "Enter your first name: ";
	getline(cin,first_name);
	cout << "Enter your last name: ";
	getline(cin,last_name );

	name.append(last_name);		//	str1.append(s2)
	name.append( ", ");			
	name.append(first_name);
	/*
	13行-15行也相当于  name = last_name + ", " + first_name ;
	*/

	cout << "Here is the information in a single string: " << name << endl;
	system("pause");
	system("pause");
	return 0;
}
