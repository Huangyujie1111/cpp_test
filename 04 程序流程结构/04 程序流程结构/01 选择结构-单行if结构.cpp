#include<iostream>
using namespace std;

int main1()
{
	//ѡ��ṹ ����if���
	int score = 0;
	cout << "������һ�������� " << endl;

	cin >> score;

	cout << "������ķ���Ϊ�� " <<score<< endl;

	if (score > 600)
	{
		cout << "��ϲ������һ����ѧ" << endl;
	}
	else
	{
		cout << "δ����һ����ѧ" << endl;
	}


	system("pause");

	return 0;
}