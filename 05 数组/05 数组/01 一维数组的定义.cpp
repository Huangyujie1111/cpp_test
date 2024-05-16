#include<iostream>
using namespace std;

int main()
{
	//数组，三种定义方式

	//1.数据类型 数组名[数组长度];
	int arr1[5];
	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;
	arr1[3] = 40;
	arr1[4] = 50;

	cout << arr1[0] << endl;

	//2.数据类型 数组名[数组长度]={值1，值2···}
	int arr2[5] = { 1,2,3,4,5 };

	cout << arr2[3] << endl;


	//3.数据类型 数组名[]={值1，值2，···}


	system("pause");

	return 0;
}