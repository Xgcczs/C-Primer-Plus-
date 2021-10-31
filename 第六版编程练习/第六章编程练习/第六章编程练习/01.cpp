#include<iostream>
#include<cctype>
using namespace std;
int main1()
{
	char c;
	cin.get(c);
	while (c !='@')
	{
		if (isdigit(c))//如果参数是数字（0～9），该函数返回true
		{
			cin.get(c);
			continue;
		}
		else if (islower(c))//如果参数是小写字母，该函数返回true
		{
			c = toupper(c);//如果参数是小写字母，则返回其大写，否则返回该参数
		}
		else if (isupper(c))//如果参数是大写字母，该函数返回true
		{
			c = tolower(c);//如果参数是大写字符，则返回其小写，否则返回该参数
		}
		cout << c;
		cin.get(c);
	}
	
	system("pause");
	return 0;
}
