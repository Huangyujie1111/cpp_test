#include"txl_system.h"

//�����ϵ�˽ṹ��
struct people
{
	string name;
	string sex;
	int age;
	string tel_number;
	string address;
};

//���ͨѶ�ṹ��
struct txl
{
	struct people pArray[MAX];
	int pArray_size;
};

void add_people(struct txl * p)
{
	if (p->pArray_size >= MAX)
	{
		cout << "ͨѶ¼�����������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//����
		string name;
		cout << "��������ϵ��������" << endl;
		cin >> name;
		p->pArray[p->pArray_size].name = name;

		//�Ա�
		int flag;
		cout << "��ѡ����ϵ���Ա�\n1 -- ��\n2 -- Ů" << endl;
		cin >> flag;
		if (flag == 1)
		{
			p->pArray[p->pArray_size].sex = "��";
		}
		else p->pArray[p->pArray_size].sex = "Ů";

		//����
		int age;
		cout << "��������ϵ�����䣺" << endl;
		cin >> age;
		p->pArray[p->pArray_size].age = age;

		//�绰
		string number;
		cout << "��������ϵ�˵绰�� " << endl;
		cin >> number;
		p->pArray[p->pArray_size].tel_number = number;

		//סַ
		string add;
		cout << "��������ϵ��סַ��" << endl;
		cin >> add;
		p->pArray[p->pArray_size].address = add;
	}
}