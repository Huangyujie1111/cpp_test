#include<iostream>
using namespace std;
#include<string>

//�ṹ������
//1.����ṹ��
struct Student
{
	string name;
	
	int age;

	int score;
};

int main1()
{
	//2.�����ṹ������
	struct Student stuArray[3]=
	{
		{"����",18,100},
		{"����",19,99},
		{"����",20,98}
	};
	//3.���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";

	//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������ " << stuArray[i].name
			<< "���䣺 " << stuArray[i].age
			<< "�ɼ��� " << stuArray[i].score << endl;
	}
	
	system("pause");

	return 0;
}