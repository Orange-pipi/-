/*************************************************
** ���� : һ��ʮ��  
** ���� : tsingke
** ���� : 2020-11-23 / 18:25
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
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
		cout << "�Ƿ��������(Y or N)��" << endl;
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
	
	cout << "�����о���ƽ���ɼ�Ϊ�� " << array->CountAverage(array, count) << endl;

	cout << "�ɼ��ȼ�Ϊ�� ";
	Ranking(array, count);


	system("pause");
	
	return 0;
}

/*----------------------------------*
          Ordinary Function
*-----------------------------------*/
void Ranking(Graduate* _array, int _count)//��ȼ�
{

	for (int i = 0; i < _count; i++)
	{
		cout << "ѧ������" << _array[i].name << endl;

		int temp = (int)_array[i].score / 10;

		switch (temp)
		{
		case 10:
			cout << "�ɼ��ȼ��� A" << endl;
			break;
		case 9:
			cout << "�ɼ��ȼ��� A" << endl;
			break;
		case 8:
			cout << "�ɼ��ȼ��� B" << endl;
			break;
		case 7:
			cout << "�ɼ��ȼ��� C" << endl;
			break;
		case 6:
			cout << "�ɼ��ȼ��� D" << endl;
			break;
		default:
			cout << "�ɼ��ȼ��� E" << endl;
			break;
		}


	}
}