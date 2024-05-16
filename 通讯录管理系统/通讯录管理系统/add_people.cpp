#include"txl_system.h"

//设计联系人结构体
struct people
{
	string name;
	string sex;
	int age;
	string tel_number;
	string address;
};

//设计通讯结构体
struct txl
{
	struct people pArray[MAX];
	int pArray_size;
};

void add_people(struct txl * p)
{
	if (p->pArray_size >= MAX)
	{
		cout << "通讯录人数已满，无法添加！" << endl;
		return;
	}
	else
	{
		//姓名
		string name;
		cout << "请输入联系人姓名：" << endl;
		cin >> name;
		p->pArray[p->pArray_size].name = name;

		//性别
		int flag;
		cout << "请选择联系人性别：\n1 -- 男\n2 -- 女" << endl;
		cin >> flag;
		if (flag == 1)
		{
			p->pArray[p->pArray_size].sex = "男";
		}
		else p->pArray[p->pArray_size].sex = "女";

		//年龄
		int age;
		cout << "请输入联系人年龄：" << endl;
		cin >> age;
		p->pArray[p->pArray_size].age = age;

		//电话
		string number;
		cout << "请输入联系人电话： " << endl;
		cin >> number;
		p->pArray[p->pArray_size].tel_number = number;

		//住址
		string add;
		cout << "请输入联系人住址：" << endl;
		cin >> add;
		p->pArray[p->pArray_size].address = add;
	}
}