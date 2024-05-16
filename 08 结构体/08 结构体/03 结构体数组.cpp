#include<iostream>
using namespace std;
#include<string>

//结构体数组
//1.定义结构体
struct Student
{
	string name;
	
	int age;

	int score;
};

int main1()
{
	//2.创建结构体数组
	struct Student stuArray[3]=
	{
		{"张三",18,100},
		{"李四",19,99},
		{"王五",20,98}
	};
	//3.给结构体数组中的元素赋值
	stuArray[2].name = "赵六";

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名： " << stuArray[i].name
			<< "年龄： " << stuArray[i].age
			<< "成绩： " << stuArray[i].score << endl;
	}
	
	system("pause");

	return 0;
}