#include<iostream>
using namespace std;

int main1()
{
	//ָ�������
	//����ָ����������е�Ԫ��

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "����ĵ�һ��Ԫ���ǣ� " << arr[0] << endl;

	int * p = arr;//arr���������׵�ַ
	cout << "����ĵ�һ��Ԫ���ǣ� " << *p << endl;

	p++;
	cout << "����ĵڶ���Ԫ���ǣ� " << *p << endl;

	/*cout << p << endl;
	cout << arr << endl;
	cout << &p << endl;*/

	system("pause");

	return 0;
}