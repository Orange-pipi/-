/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-11-20 / 10:07
** 作者： Orange-pipi
/**************************************************/

#pragma once
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


/*----------------------------------*
	类定义
*-----------------------------------*/

class Triangle
{

private:

	double a, b, c;
	int flag;

public:

	Triangle(double, double, double);
	~Triangle();

	int Check();//检验三角形是否成立
	double TriangleLength();//求周长
	double TriangleArea();//求面积
	int TriangleType();//三角形类型

};

/*----------------------------------*
	类中成员函数定义
*-----------------------------------*/
Triangle::Triangle(double p1, double p2, double p3)
{
	a = p1;
	b = p2;
	c = p3;
}

Triangle::~Triangle()
{

}

int Triangle::Check()
{
	return a + b > c&&a + c > b&&b + c > a;
}

double Triangle::TriangleLength()
{
	if (Check())
	{
		return a + b + c;
	}
	else
	{
		return 0;
	}
}

double Triangle::TriangleArea()
{
	if (Check())
	{
		double p = (a + b + c) / 2;
		return sqrt(p*(p - a)*(p - b)*(p - c));
	}
	else
	{
		return 0;
	}
}

int Triangle::TriangleType()
{
	double A, B, C;
	A = b * b + c * c - a * a;
	B = a * a + c * c - b * b;
	C = a * a + b * b - c * c;

	if (A == 0 || B == 0 || C == 0)
	{
		return 0;
	}
	else if (A > 0 && B > 0 && C > 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
