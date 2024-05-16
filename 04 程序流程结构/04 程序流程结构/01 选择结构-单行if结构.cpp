#include<iostream>
using namespace std;

int main1()
{
	//选择结构 单行if语句
	int score = 0;
	cout << "请输入一个分数： " << endl;

	cin >> score;

	cout << "您输入的分数为： " <<score<< endl;

	if (score > 600)
	{
		cout << "恭喜您考上一本大学" << endl;
	}
	else
	{
		cout << "未考上一本大学" << endl;
	}


	system("pause");

	return 0;
}