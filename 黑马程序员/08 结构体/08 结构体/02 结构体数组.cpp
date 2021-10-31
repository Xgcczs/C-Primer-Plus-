#include<iostream>
using namespace std;
// 结构体数组
// 1. 定义结构体
struct Student
{
	string name;
	int age;
	int score;
};

int main()
{
// 2.创建结构体
	struct Student stuArr[3] =
	{
		{"老八",38,66},
		{"giao",26,86},
		{"郭子",48,6}
	};

// 3. 给结构体数组中的元素赋值
	stuArr[2].name = "达令";
	stuArr[2].age = 45;
	stuArr[2].score = 0;
// 4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArr[i].name << "年龄: " << stuArr[i].age << "分数: " << stuArr[i].score << endl;
	}

	system("pause");
	return 0;
}
