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


int main()
{
	struct txl txl;
	txl.pArray_size = 0;

	int select = 0;
	while (true)
	{
		showMenu();//�˵������չʾ

		cin >> select;

		switch (select)
		{
		case 1:  //1.�����ϵ��
			add_people(&txl);
			break;
		case 2:  //2.��ʾ��ϵ��
			break;
		case 3:  //3.ɾ����ϵ��
			break;
		case 4:  //4.������ϵ��
			break;
		case 5:  //5.�޸���ϵ��
			break;
		case 6:  //6.�����ϵ��
			break;

		case 0:  //0.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;

			system("pause");
			return 0;
			break;
		}
	}

	system("pause");

	return 0;
}