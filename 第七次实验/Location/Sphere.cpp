/*************************************************
** 源文件   : Sphere.cpp
** 功能说明 : 定义 Sphere类 中的函数
** 创建时间 : 2020-12-9/18:11
** 创建： Orange-pipi
/**************************************************/

/*----------------头文件引入--------------*/

#include "Sphere.h"


/*----------------类中函数定义-------------*/

Sphere::Sphere()
{
	x = 0;
	y = 0;
	z = 0;
	r = 1;
}

Sphere::Sphere(double _x, double _y, double _z, double _r) : Point(_x, _y, _z)
{
	r = _r;
}

Sphere::~Sphere()
{

}

void Sphere::move(double p1, double p2, double p3)
{
	x += p1;
	y += p2;
	z += p3;
}

void Sphere::show()
{
	cout << "球心坐标为： (" << x << ", " << y << ", " << z << ")";

	cout << "\t半径为： " << r << endl;
}