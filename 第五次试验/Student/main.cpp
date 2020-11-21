/*************************************************
** ���� : һ��ʮ��  
** ���� : tsingke
** ���� : 2020-11-21 / 11:36
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Student.h"

using namespace std;

const int N = 10;
int numCount = 0;

void menu();//���˵�
void InputData(Student* array);//����ѧ������
void UpdateData(Student* array);//����ѧ������
void OutputData(Student* array, char* num);//��ѯĳһ����Ϣ
void OutputList(Student* array);//���ѧ���б�

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	Student array[N];
	int choice;

	do
	{
		menu();

		cout << "������ѡ� ";

		cin >> choice;
		if (choice >= 0 && choice <= 4)
		{
			switch (choice)
			{
			case 1:
				InputData(array);
				break;
			case 2:
				UpdateData(array);
				break;
			case 3:
				cout << "������ѧ�Ų�ѯ�� ";

				char check[13];

				cin >> check;

				OutputData(array, check);

				break;
			case 4:
				OutputList(array);
				break;
			default:
				break;
			}
		}

	} while (choice);

	system("pause");
	
	return 0;
}

/*----------------------------------*
          Ordinary Function
*-----------------------------------*/

void  menu()//���˵�
{
	cout << "******1.¼����Ϣ******" << endl;
	cout << "******2.������Ϣ******" << endl;
	cout << "******3.��ѯ��Ϣ******" << endl;
	cout << "******4.�����Ϣ******" << endl;
	cout << "******0.��    ��******" << endl;
}

void InputData(Student* array)//����ѧ����Ϣ
{
	char ch;
	do
	{
		array[numCount].Input();

		numCount++;

		cout << "�Ƿ��������(Y or N)�� ";

		cin >> ch;

	} while (ch == 'Y');
}

void UpdateData(Student* array)//����ѧ����Ϣ
{
	char ch, num[13];

	cout << "������ѧ�ţ� ";

	cin >> num;

	for (int i = 0; i < numCount; i++)
	{
		if (strcmp(array[i].GetStuNumber(), num) == 0)
		{
			do
			{
				array[i].Update();

				cout << "�Ƿ�����޸�(Y or N)�� ";

				cin >> ch;

			} while (ch == 'Y');
		}
		else
		{
			cout << "��ѧ����Ϣδ¼�룡" << endl;
		}
	}


}

void OutputData(Student* array, char *num)//��ѯѧ��ĳһ����Ϣ
{
	for (int i = 0; i < numCount; i++)
	{
		if (strcmp(array[i].GetStuNumber(),num) == 0)
		{
			cout << "ѧ������Ϊ��" << array[i].GetName() << "(" << array[i].GetStuNumber() << ")" << endl;
			char ch;
			do
			{
				int a;

				cout << endl << "1.�Ա�\t" << "2.��������\t" << "3.��ͥסַ" << endl;
				cout << "4.���ĳɼ�\t" << "5.��ѧ�ɼ�\t" << "6.Ӣ��ɼ�" << endl;
				cout << "7.˼��Ʒ�³ɼ�\t" << "8.��ѧ�ɼ�\t" << "9.������ɼ�" << endl << endl;

				cout << "��������Ҫ��ѯ����Ϣ��ţ� ";

				cin >> a;

				switch (a)
				{
				case 1:
					cout <<"�Ա� " << array[i].GetSex() << endl;
					break;
				case 2:
					cout <<"�������ڣ� " << array[i].GetBirth() << endl;
					break;
				case 3:
					cout << "��ͥסַ�� " << array[i].GetAddress() << endl;
					break;
				case 4:
					cout << "���ĳɼ��� " << array[i].GetChineseScore() << endl;
					break;
				case 5:
					cout << "��ѧ�ɼ��� " << array[i].GetMathScore() << endl;
					break;
				case 6:
					cout << "Ӣ��ɼ��� " << array[i].GetEnglishScore() << endl;
					break;
				case 7:
					cout << "˼��Ʒ�³ɼ��� " << array[i].GetMoralScore() << endl;
					break;
				case 8:
					cout << "��ѧ�ɼ��� " << array[i].GetScienceScore() << endl;
					break;
				case 9:
					cout << "������ɼ��� " << array[i].GetComputerScore() << endl;
					break;
				default:
					break;
				}

				cout << "�Ƿ������ѯ(Y or N)�� ";

				cin >> ch;

			} while (ch == 'Y');

			break;
		}
		else
		{
			cout << "δ��ѯ����Ч��ݣ�" << endl;
		}
	}
}

void OutputList(Student* array)//����б�
{
	cout << "��ǰѧ������Ϊ�� " << numCount << endl;
	for (int i = 0; i < numCount; i++)
	{
		array[i].Display();
	}
}