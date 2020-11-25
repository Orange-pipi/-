/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-11-23 / 18:25
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Graduate.h"

using namespace std;

const int N = 10;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	Graduate array[N];
	
	int count = 0;
	char choice;

	do 
	{
		array[count].Input();
		count++;
		cout << "是否继续输入(Y or N)：" << endl;
		cin >> choice;

	} while (choice == 'Y');

	Graduate zhangsan("zhangsan", true, 20170101, 100, "science", "teacher");
	//array[count] = zhangsan;
	array[count].Copy(zhangsan);
	count++;

	const Graduate lisi("lisi", true, 20170102, 100, "datasecurity", "teacher");
	//array[count] = lisi;
	array[count].Copy(lisi);
	count++;

	for (int i = 0; i < count; i++)
	{
		array[i].Display();
	}
	
	cout << "所有研究生平均成绩为： " << array->CountAverage(array, count) << endl;

	cout << "成绩等级为： ";
	Ranking(array, count);


	system("pause");
	
	return 0;
}

/*----------------------------------*
          Ordinary Function
*-----------------------------------*/
void Ranking(Graduate* _array, int _count)//求等级
{

	for (int i = 0; i < _count; i++)
	{
		cout << "学生姓名" << _array[i].name << endl;

		int temp = (int)_array[i].score / 10;

		switch (temp)
		{
		case 10:
			cout << "成绩等级： A" << endl;
			break;
		case 9:
			cout << "成绩等级： A" << endl;
			break;
		case 8:
			cout << "成绩等级： B" << endl;
			break;
		case 7:
			cout << "成绩等级： C" << endl;
			break;
		case 6:
			cout << "成绩等级： D" << endl;
			break;
		default:
			cout << "成绩等级： E" << endl;
			break;
		}


	}
}