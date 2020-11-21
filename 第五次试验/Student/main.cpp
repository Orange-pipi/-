/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-11-21 / 11:36
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Student.h"

using namespace std;

const int N = 10;
int numCount = 0;

void menu();//主菜单
void InputData(Student* array);//输入学生数据
void UpdateData(Student* array);//更新学生数据
void OutputData(Student* array, char* num);//查询某一条信息
void OutputList(Student* array);//输出学生列表

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

		cout << "请输入选项： ";

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
				cout << "请输入学号查询： ";

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

void  menu()//主菜单
{
	cout << "******1.录入信息******" << endl;
	cout << "******2.更新信息******" << endl;
	cout << "******3.查询信息******" << endl;
	cout << "******4.输出信息******" << endl;
	cout << "******0.退    出******" << endl;
}

void InputData(Student* array)//输入学生信息
{
	char ch;
	do
	{
		array[numCount].Input();

		numCount++;

		cout << "是否继续输入(Y or N)： ";

		cin >> ch;

	} while (ch == 'Y');
}

void UpdateData(Student* array)//更新学生信息
{
	char ch, num[13];

	cout << "请输入学号： ";

	cin >> num;

	for (int i = 0; i < numCount; i++)
	{
		if (strcmp(array[i].GetStuNumber(), num) == 0)
		{
			do
			{
				array[i].Update();

				cout << "是否继续修改(Y or N)： ";

				cin >> ch;

			} while (ch == 'Y');
		}
		else
		{
			cout << "该学生信息未录入！" << endl;
		}
	}


}

void OutputData(Student* array, char *num)//查询学生某一条信息
{
	for (int i = 0; i < numCount; i++)
	{
		if (strcmp(array[i].GetStuNumber(),num) == 0)
		{
			cout << "学生姓名为：" << array[i].GetName() << "(" << array[i].GetStuNumber() << ")" << endl;
			char ch;
			do
			{
				int a;

				cout << endl << "1.性别\t" << "2.出生年月\t" << "3.家庭住址" << endl;
				cout << "4.语文成绩\t" << "5.数学成绩\t" << "6.英语成绩" << endl;
				cout << "7.思想品德成绩\t" << "8.科学成绩\t" << "9.计算机成绩" << endl << endl;

				cout << "请输入需要查询的信息序号： ";

				cin >> a;

				switch (a)
				{
				case 1:
					cout <<"性别： " << array[i].GetSex() << endl;
					break;
				case 2:
					cout <<"出生日期： " << array[i].GetBirth() << endl;
					break;
				case 3:
					cout << "家庭住址： " << array[i].GetAddress() << endl;
					break;
				case 4:
					cout << "语文成绩： " << array[i].GetChineseScore() << endl;
					break;
				case 5:
					cout << "数学成绩： " << array[i].GetMathScore() << endl;
					break;
				case 6:
					cout << "英语成绩： " << array[i].GetEnglishScore() << endl;
					break;
				case 7:
					cout << "思想品德成绩： " << array[i].GetMoralScore() << endl;
					break;
				case 8:
					cout << "科学成绩： " << array[i].GetScienceScore() << endl;
					break;
				case 9:
					cout << "计算机成绩： " << array[i].GetComputerScore() << endl;
					break;
				default:
					break;
				}

				cout << "是否继续查询(Y or N)： ";

				cin >> ch;

			} while (ch == 'Y');

			break;
		}
		else
		{
			cout << "未查询到有效身份！" << endl;
		}
	}
}

void OutputList(Student* array)//输出列表
{
	cout << "当前学生人数为： " << numCount << endl;
	for (int i = 0; i < numCount; i++)
	{
		array[i].Display();
	}
}