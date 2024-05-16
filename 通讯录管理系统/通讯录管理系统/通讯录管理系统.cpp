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


int main()
{
	struct txl txl;
	txl.pArray_size = 0;

	int select = 0;
	while (true)
	{
		showMenu();//菜单界面的展示

		cin >> select;

		switch (select)
		{
		case 1:  //1.添加联系人
			add_people(&txl);
			break;
		case 2:  //2.显示联系人
			break;
		case 3:  //3.删除联系人
			break;
		case 4:  //4.查找联系人
			break;
		case 5:  //5.修改联系人
			break;
		case 6:  //6.清空联系人
			break;

		case 0:  //0.退出通讯录
			cout << "欢迎下次使用" << endl;

			system("pause");
			return 0;
			break;
		}
	}

	system("pause");

	return 0;
}