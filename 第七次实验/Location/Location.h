/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-12-9 / 16:35
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once//��֤ͬһ�ļ����ᱻ������
#include <iostream>
using namespace std;


/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Location
{
protected:

	double x;
	double y;

public:

	Location();
	Location(double _x, double _y);
	~Location();

	void move(double p1, double p2);
	void show();
};