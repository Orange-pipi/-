/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-12-9 / 17:40
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once//��֤ͬһ�ļ����ᱻ������
#include <iostream>

#include "Point.h"

using namespace std;


/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Sphere : public Point
{
protected:

	double r;

public:

	Sphere();
	Sphere(double _x, double _y, double _z, double _r);
	~Sphere();

	void move(double p1, double p2, double p3);
	void show();
};