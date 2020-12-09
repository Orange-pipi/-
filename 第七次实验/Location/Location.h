/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-12-9 / 16:35
** 作者： Orange-pipi
/**************************************************/

#pragma once//保证同一文件不会被编译多次
#include <iostream>
using namespace std;


/*----------------------------------*
	类定义
*-----------------------------------*/

class Location
{
protected:

	double x;
	double y;

public:

	Location();
	Location(double _x, double _y);
	~Location();

	void move(double p1, double p2);
	void show();
};