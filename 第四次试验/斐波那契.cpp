/*************************************************
** ���� : һ��ʮ��
** ���� : tsingke
** ���� : 2020-10-27 / 21:32
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

const int N = 30;
/*----------------------------------*
		 Class Definition
*-----------------------------------*/



/*----------------------------------*
		Global Definition
*-----------------------------------*/




/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{

	int f[N] = { 1,1 };
	int i;
	int *p;
	p = new int[N];
	for (i = 2; i < N; i++)
	{
		f[i] = f[i - 2] + f[i - 1];
	}


	for (i = 0; i < N; i++)
	{
		*p = f[i];
		cout << *p << endl;
	}

	delete[]p;


	system("pause");

	return 0;
}