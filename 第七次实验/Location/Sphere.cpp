/*************************************************
** Դ�ļ�   : Sphere.cpp
** ����˵�� : ���� Sphere�� �еĺ���
** ����ʱ�� : 2020-12-9/18:11
** ������ Orange-pipi
/**************************************************/

/*----------------ͷ�ļ�����--------------*/

#include "Sphere.h"


/*----------------���к�������-------------*/

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
	cout << "��������Ϊ�� (" << x << ", " << y << ", " << z << ")";

	cout << "\t�뾶Ϊ�� " << r << endl;
}