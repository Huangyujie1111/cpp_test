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
			cout << "��" << flag << "�������ӣ���ε������ǣ�" << i << endl;
			flag++;
		}
		else if (i >= 70 && i <= 79)
		{
			cout << "��" << flag << "�������ӣ���ε������ǣ�" << i << endl;
			flag++;
		}
		else if (i % 10 == 7)
		{
			cout << "��" << flag << "�������ӣ���ε������ǣ�" << i << endl;
			flag++;
		}
		else
		{
			cout << "�������ӣ���ε������ǣ�" << i << endl;
		}
	}

	system("pause");

	return 0;
}
