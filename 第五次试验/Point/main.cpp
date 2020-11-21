/*************************************************
** 功能 : 一键十行
** 作者 : tsingke
** 创建 : 2020-11-21 / 19:38
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Point.h"

using namespace std;

/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	double x1, y1, x2, y2;

	cout << "请输入a点横坐标：";
	cin >> x1;

	cout << "请输入a点纵坐标：";
	cin >> y1;

	cout << "请输入b点横坐标：";
	cin >> x2;

	cout << "请输入b点纵坐标：";
	cin >> y2;

	Point a(x1, y1);
	Point b(x2, y2);

	Cout(a, b);

	cout << "两点之间距离为： " << Distance(a, b) << endl;

	system("pause");

	return 0;
}