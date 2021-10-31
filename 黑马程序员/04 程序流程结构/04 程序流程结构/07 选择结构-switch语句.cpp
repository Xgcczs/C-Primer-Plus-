#include<iostream>
using namespace std;
int main7()
{
	// switch 语句
	// switch缺点：判断时只能是整型或者字符型，不能是一个区间
	//		 优点：结构清晰，执行效率高
	cout << "请输入评分：" << endl;
	int score;
	cin >> score;

	switch (score)
	{
	case 10:
		cout << "经典" << endl; 
		break;
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "不错" << endl;
		break;
	case 7:
		cout << "不错" << endl;
		break;
	case 6:
		cout << "一般" << endl;
		break;
	case 5:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}

	system("pause");
	return 0;
}
