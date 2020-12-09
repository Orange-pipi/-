/*************************************************
** Դ�ļ�   : Location.cpp
** ����˵�� : ���� Location�� �еĺ���
** ����ʱ�� : 2020-12-9/16:35
** ������ Orange-pipi
/**************************************************/

/*----------------ͷ�ļ�����--------------*/

#include "Location.h"


/*----------------���к�������-------------*/

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
	cout << "��ά����Ϊ�� (" << x << ", " << y << ")" << endl;
}