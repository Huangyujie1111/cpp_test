#include<iostream>
using namespace std;
#include<string>

//���һ��Ӣ�۵Ľṹ�壬������Ա�����������䣬�Ա�
struct Hero
{
	string name;

	int age;

	string sex;
};

//ð������
void bubble(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}


int main()
{
	//�����ṹ�����飬�����д��5��Ӣ��
	struct Hero heroArray[5];
	heroArray[0] = { "����", 23, "��" };
	heroArray[1] = { "����", 22, "��" };
	heroArray[2] = { "�ŷ�", 20, "��" };
	heroArray[3] = { "����", 21, "��" };
	heroArray[4] = { "����", 19, "Ů" };

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for(int i = 0;i<len;i++)
	{
		cout << "������ " << heroArray[i].name
			<< " ���䣺 " << heroArray[i].age
			<< " �Ա� " << heroArray[i].sex << endl;
	}

	bubble(heroArray, len);

	cout << "\n" << endl;
	for (int i = 0; i < len; i++)
	{
		cout  << "������ " << heroArray[i].name
			<< " ���䣺 " << heroArray[i].age
			<< " �Ա� " << heroArray[i].sex << endl;
	}

	system("pause");

	return 0;
}