/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-12-9 / 17:39
** 作者： Orange-pipi
/**************************************************/

#pragma once//保证同一文件不会被编译多次
#include <iostream>

#include "Location.h"

using namespace std;


/*----------------------------------*
	类定义
*-----------------------------------*/

class Point : public Location
{
protected:

	double z;

public:

	Point();
	Point(double _x, double _y, double _z);
	~Point();

	void move(double p1, double p2, double p3);
	void show();
};