#include<iostream>
using namespace std;

int main2()
{
	int num = 99;
	int hundred = 0;
	int ten = 0;
	int one = 0;
	int flag = 1;
	int num1 = 0;

	do
	{
		num++;
		hundred = num / 100;
		ten = (num /10 ) % 10;
		one = (num % 10);
		//cout << "��ǰ��Ϊ�� " << num << endl;

		num1 = hundred*hundred*hundred+ten*ten*ten+one*one*one;

		if (num1 == num)
		{
			cout << "��" << flag << "��ˮ�ɻ����ǣ� " << num1 << endl;
			flag+=1;
		}
	} while (num < 1000);

	system("pause");

	return 0;
}