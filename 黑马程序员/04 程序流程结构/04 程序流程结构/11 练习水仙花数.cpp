#include<iostream>
using namespace std;
#include<math.h>
int main11()
{
	//	水仙花数：是三位数，且每个位的数字的立方之和等于该数
	//	例如： 1^3+5^3+3^3 = 153
	//	使用do...while 结构
	int num=100;
	int num1, num2, num3;
	int shuixian=0, Num=0;
	
	//num1 = num / 100;
	//num2 = (num % 100) / 10;
	//num3 = (num % 100) % 10;

	//Num = pow(num1,3)+ pow(num2, 3)+ pow(num3, 3);
	//shuixian = num1 * 100 + num2 * 10 + num3;
	//cout <<"num1=" << num1 << endl;
	//cout << "num2=" << num2 << endl;
	//cout << "num3=" << num3 << endl;

	//cout << "Num=" << Num << endl;
	//cout << "shuixian=" << shuixian << endl;


	cout << "使用do...while循环输出水仙花数为：" << endl;
	do
	{
		num1 = num / 100;
		num2 = (num % 100) / 10;
		num3 = (num % 100) % 10;
	
		Num = pow(num1, 3) + pow(num2, 3) + pow(num3, 3);
		shuixian = num1 * 100 + num2 * 10 + num3;

		if (Num == shuixian)
		{
			cout<< Num << endl;
		}
		num++;
	} while (num <= 999);
	
	/*cout << "使用while循环输出水仙花数为：" << endl;
	while(num<=999)
	{
		num1 = num / 100;
		num2 = (num % 100) / 10;
		num3 = (num % 100) % 10;

		Num = pow(num1, 3) + pow(num2, 3) + pow(num3, 3);
		shuixian = num1 * 100 + num2 * 10 + num3;

		if (Num == shuixian)
		{
			cout << Num << endl;
		}
		num++;
	}*/

	system("pause");
	return 0;
}
