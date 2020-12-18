/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-12-16 / 16:15
** 作者： Orange-pipi
/**************************************************/

#pragma once//保证同一文件不会被编译多次
#include <iostream>
using namespace std;


/*----------------------------------*
	类定义
*-----------------------------------*/

class Shapes
{
public:

	virtual void Display() = 0;
};

class Rectangles : public Shapes
{
public:

	void Display();
};

class Circle : public Shapes
{
public:

	void Display();
};