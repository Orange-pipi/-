/*************************************************
** ���� : һ��ʮ��  
** ���� : tsingke
** ���� : 2020-12-14 / 16:46
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Array.h"
using namespace std;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	Array a1;
	a1.Print();

	Array a2(3);
	a2.Print();

	Array a3 = a2;

	cout << "������Ҫ�޸ĵ�λ�� ��ֵ��" << endl;

	int i;
	int x;

	cin >> i >> x;

	a3.Update(i, x);
	a3.Print();

	Array a4 = a3;
	a4 += a3;
	a4.Print();

	Array a5 = a4;
	a5 -= a3;
	a5.Print();
	
	system("pause");
	
	return 0;
}

/*----------------------------------*
          Ordinary Function
*-----------------------------------*/

