#include<iostream>
using namespace std;

int main3()
{
	int flag = 1;

	int i = 1;
	for (i; i <= 100; i++)
	{
		if (i%7 == 0)
		{
			cout << "第" << flag << "次敲桌子，这次的数字是：" << i << endl;
			flag++;
		}
		else if (i >= 70 && i <= 79)
		{
			cout << "第" << flag << "次敲桌子，这次的数字是：" << i << endl;
			flag++;
		}
		else if (i % 10 == 7)
		{
			cout << "第" << flag << "次敲桌子，这次的数字是：" << i << endl;
			flag++;
		}
		else
		{
			cout << "不敲桌子，这次的数字是：" << i << endl;
		}
	}

	system("pause");

	return 0;
}
