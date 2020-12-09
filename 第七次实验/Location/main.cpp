/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-12-9 / 16:36
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Location.h"
#include "Point.h"
#include "Sphere.h"

using namespace std;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{

	Location a1;
	Location a2(3, 4);

	Point b1(3.2, 5, 4.3);
	Point b2 = b1;

	Sphere c1;
	Sphere c2(2, 3, 4, 5);
	Sphere c3;

	a1.show();
	a2.show();

	b1.show();

	b2.move(1, -1, 1.2);
	b2.show();

	c1.show();

	c2.move(1, 1, 1);
	c2.show();

	c3 = c2;
	c3.move(1, 1, 1);
	c3.show();
	
	system("pause");
	
	return 0;
}

/*----------------------------------*
          Ordinary Function
*-----------------------------------*/

