#include<iostream>
using namespace std;
#include<string>

//�ṹ��ָ��

//����ѧ���ṹ��
struct Student
{
	string name;

	int age;

	int score;
};

int main2()
{
	//1.����ѧ���ṹ�����
	struct Student s;
	s.name = "����";
	s.age = 18;
	s.score = 100;

	//2.ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s;

	//3.ͨ��ָ����ʽṹ������е�����
	cout << "������ " << p->name
		<< " ���䣺 " << p->age
		<< " �ɼ��� " << p->score << endl;

	system("pause");

	return 0;
}