#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string student_name;

	int score;
};

struct Teacher
{
	string teacher_name;

	struct Student stuArray[5];
};

void input_message(struct Teacher *p)
{
	cout << "�������λ��ʦ��������" << endl;
	cin >> p->teacher_name;

	for (int i = 0; i < 5; i++)
	{
		cout << "�������λ��ʦ����ĵ�" << i+1 << "λѧ��������" << endl;
		cin >> p->stuArray[i].student_name;
		cout << "�������λ��ʦ����ĵ�" << i+1 << "λѧ���ĳɼ�" << endl;
		cin >> p->stuArray[i].score;
	}
}

void Print_Teacher_Messages(struct Teacher * p)
{
	for (int j = 0; j < 5; j++)
	{
		cout << "��λ��ʦ���ĵ�" << j + 1 << "λѧ���������ǣ�" << p->stuArray[j].student_name 
												<<"�ɼ��ǣ�"<<p->stuArray[j].score << endl;
	}
}

int main3()
{
	struct Teacher teaArray[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "�������" << i+1 << "λ��ʦ�ı�����Ϣ" << endl;
		input_message(&teaArray[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "��" << i + 1 << "λ��ʦ�������ǣ�" << teaArray[i].teacher_name << endl;
		Print_Teacher_Messages(&teaArray[i]);
	}
	

	system("pause");

	return 0;
}