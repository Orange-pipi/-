/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-12-16 / 16:27
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
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

