/*************************************************
** ���� : һ��ʮ��  
** ���� : tsingke
** ���� : 2020-12-16 / 16:27
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Shapes.h"

using namespace std;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{

	Shapes *p[2];

	p[0] = new Rectangles;
	p[1] = new Circle;

	p[0]->Display();
	p[1]->Display();
	
	system("pause");
	
	return 0;
}

/*----------------------------------*
          Ordinary Function
*-----------------------------------*/

