/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-12-9 / 17:39
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once//��֤ͬһ�ļ����ᱻ������
#include <iostream>

#include "Location.h"

using namespace std;


/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Point : public Location
{
protected:

	double z;

public:

	Point();
	Point(double _x, double _y, double _z);
	~Point();

	void move(double p1, double p2, double p3);
	void show();
};