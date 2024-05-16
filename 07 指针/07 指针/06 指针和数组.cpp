#include<iostream>
using namespace std;

int main1()
{
	//指针和数组
	//利用指针访问数组中的元素

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "数组的第一个元素是： " << arr[0] << endl;

	int * p = arr;//arr就是数组首地址
	cout << "数组的第一个元素是： " << *p << endl;

	p++;
	cout << "数组的第二个元素是： " << *p << endl;

	/*cout << p << endl;
	cout << arr << endl;
	cout << &p << endl;*/

	system("pause");

	return 0;
}