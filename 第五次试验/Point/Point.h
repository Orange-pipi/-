/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-11-21 / 19:37
** 作者： Orange-pipi
/**************************************************/

#pragma once//保证同一文件不会被编译多次
#include <iostream>
using namespace std;


/*----------------------------------*
	类定义
*-----------------------------------*/

class Point
{

public:
	double x;
	double y;
	Point()//无参构造函数
	{
		x = 0;
		y = 0;
	}
	Point(double x, double y)//设置xy特定值
	{
		this->x = x;
		this->y = y;

	}

	double getx()
	{
		return x;

	}
	double gety()
	{
		return y;

	}
	friend double Cout(Point a, Point b)
	{
		cout << "两个点为： " << endl;
		cout << "a" << "(" << a.getx() << "," << a.gety() << ")" << endl;
		cout << "b" << "(" << b.getx() << "," << b.gety() << ")" << endl;
		return 0;
	}
	friend double Distance(Point a, Point b)
	{

		return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));

	}

};