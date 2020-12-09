/*************************************************
** 源文件   : Location.cpp
** 功能说明 : 定义 Location类 中的函数
** 创建时间 : 2020-12-9/16:35
** 创建： Orange-pipi
/**************************************************/

/*----------------头文件引入--------------*/

#include "Location.h"


/*----------------类中函数定义-------------*/

Location::Location()
{
	x = 0;
	y = 0;
}

Location::Location(double _x, double _y)
{
	x = _x;
	y = _y;
}

Location::~Location()
{

}

void Location::move(double p1, double p2)
{
	x += p1;
	y += p2;
}

void Location::show()
{
	cout << "二维坐标为： (" << x << ", " << y << ")" << endl;
}