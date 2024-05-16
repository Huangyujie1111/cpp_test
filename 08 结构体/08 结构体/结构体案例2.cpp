#include<iostream>
using namespace std;
#include<string>

//设计一个英雄的结构体，包括成员的姓名，年龄，性别
struct Hero
{
	string name;

	int age;

	string sex;
};

//冒泡排序
void bubble(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}


int main()
{
	//创建结构体数组，数组中存放5名英雄
	struct Hero heroArray[5];
	heroArray[0] = { "刘备", 23, "男" };
	heroArray[1] = { "关羽", 22, "男" };
	heroArray[2] = { "张飞", 20, "男" };
	heroArray[3] = { "赵云", 21, "男" };
	heroArray[4] = { "貂蝉", 19, "女" };

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for(int i = 0;i<len;i++)
	{
		cout << "姓名： " << heroArray[i].name
			<< " 年龄： " << heroArray[i].age
			<< " 性别： " << heroArray[i].sex << endl;
	}

	bubble(heroArray, len);

	cout << "\n" << endl;
	for (int i = 0; i < len; i++)
	{
		cout  << "姓名： " << heroArray[i].name
			<< " 年龄： " << heroArray[i].age
			<< " 性别： " << heroArray[i].sex << endl;
	}

	system("pause");

	return 0;
}