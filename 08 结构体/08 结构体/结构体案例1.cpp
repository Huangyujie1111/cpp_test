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
	cout << "请输入此位教师的姓名：" << endl;
	cin >> p->teacher_name;

	for (int i = 0; i < 5; i++)
	{
		cout << "请输入此位教师带领的第" << i+1 << "位学生的姓名" << endl;
		cin >> p->stuArray[i].student_name;
		cout << "请输入此位教师带领的第" << i+1 << "位学生的成绩" << endl;
		cin >> p->stuArray[i].score;
	}
}

void Print_Teacher_Messages(struct Teacher * p)
{
	for (int j = 0; j < 5; j++)
	{
		cout << "这位教师带的第" << j + 1 << "位学生的姓名是：" << p->stuArray[j].student_name 
												<<"成绩是："<<p->stuArray[j].score << endl;
	}
}

int main3()
{
	struct Teacher teaArray[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "请输入第" << i+1 << "位教师的毕设信息" << endl;
		input_message(&teaArray[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i + 1 << "位教师的姓名是：" << teaArray[i].teacher_name << endl;
		Print_Teacher_Messages(&teaArray[i]);
	}
	

	system("pause");

	return 0;
}