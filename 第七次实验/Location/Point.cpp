/*************************************************
** Դ�ļ�   : Point.cpp
** ����˵�� : ���� Point�� �еĺ���
** ����ʱ�� : 2020-12-9/17:42
** ������ Orange-pipi
/**************************************************/

/*----------------ͷ�ļ�����--------------*/

#include "Point.h"


/*----------------���к�������-------------*/

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
	cout << "��ά����Ϊ�� (" << x << ", " << y << ", " << z << ")" << endl;

}