#include<iostream>
#include<cctype>
using namespace std;
int main1()
{
	char c;
	cin.get(c);
	while (c !='@')
	{
		if (isdigit(c))//������������֣�0��9�����ú�������true
		{
			cin.get(c);
			continue;
		}
		else if (islower(c))//���������Сд��ĸ���ú�������true
		{
			c = toupper(c);//���������Сд��ĸ���򷵻����д�����򷵻ظò���
		}
		else if (isupper(c))//��������Ǵ�д��ĸ���ú�������true
		{
			c = tolower(c);//��������Ǵ�д�ַ����򷵻���Сд�����򷵻ظò���
		}
		cout << c;
		cin.get(c);
	}
	
	system("pause");
	return 0;
}
