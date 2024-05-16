#include<iostream>
using namespace std;

//1.#define宏常量
#define Day 7

int main4()
{
	cout << "一周总共有：" << Day << " 天" << endl;

	//2.const修饰的变量
	const int month = 12;
	cout << "一年总共有：" << month << " 月" << endl;

	system("pause");

	return 0;
}