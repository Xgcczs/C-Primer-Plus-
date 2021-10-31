#include<iostream>
using namespace std;
#include<string>
// 1.创建学生数据类型： 学生包括（姓名，年龄，分数）
// 自定义数据类型，一些类型集合组成的一个类型
// 语法  struct 类型名称{ 成员列表 }
struct student 
{
	//成员列表
	string name;
	int age;
	int score;
}s3;	// 顺便创建结构体变量

//	2.通过学生类型创建具体学生


int main1()
{
//  2.1 struct student s1
	struct student s1; // 创建结构体时，struct可以省略；定义时不可以省略
	s1.name = "老八";	// 给s1属性赋值，通过.访问结构体变量中的属性
	s1.age = 38;
	s1.score = 88;

	cout << "姓名：" << s1.name << "年龄: " << s1.age << "分数: " << s1.score << endl;
//  2.2 struct student s2 = { val1,val2,... }
	struct student s2 = { "giao",40,100 };
	cout << "姓名：" << s2.name << "年龄: " << s2.age << "分数: " << s2.score << endl;



//	2.3 在定义结构体时顺便创建结构体变量 见第13行
	s3.name = "郭子";
	s3.age = 38;
	s3.score = 0;
	cout << "姓名：" << s3.name << "年龄: " << s3.age << "分数: " << s3.score << endl;
	system("pause");
	return 0;
}
