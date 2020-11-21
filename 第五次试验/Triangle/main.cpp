/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-11-18 / 17:58
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Triangle.h"

using namespace std;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	cout << "******测试******" << endl;

	double num1, num2, num3;

	cout << "请输入三角形三条边（用空格区分）" << endl;

	cin >> num1 >> num2 >> num3;

	Triangle a(num1, num2, num3);//初始化三角形

	cout << a.Check() << endl;

	double l = a.TriangleLength();
	double s = a.TriangleArea();
	double ty = a.TriangleType();

	cout << "三角形周长是： " << l << endl;

	cout << "三角形面积是： " << s << endl;

	if (ty == 1)
	{
		cout << "三角形是锐角三角形" << endl;
	}
	else if (ty == 0)
	{
		cout << "三角形是直角三角形" << endl;
	}
	else
	{
		cout << "三角形是钝角三角形" << endl;
	}

	cout << "******测试结束******" << endl;

	system("pause");

	return 0;
}