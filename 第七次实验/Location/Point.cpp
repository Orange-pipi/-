/*************************************************
** 源文件   : Point.cpp
** 功能说明 : 定义 Point类 中的函数
** 创建时间 : 2020-12-9/17:42
** 创建： Orange-pipi
/**************************************************/

/*----------------头文件引入--------------*/

#include "Point.h"


/*----------------类中函数定义-------------*/

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(double _x, double _y, double _z) : Location(_x, _y)
{
	z = _z;
}

Point::~Point()
{

}

void Point::move(double p1, double p2, double p3)
{
	x += p1;
	y += p2;
	z += p3;
}

void Point::show()
{
	cout << "三维坐标为： (" << x << ", " << y << ", " << z << ")" << endl;

}