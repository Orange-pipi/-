/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-11-21 / 19:37
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once//��֤ͬһ�ļ����ᱻ������
#include <iostream>
using namespace std;


/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Point
{

public:
	double x;
	double y;
	Point()//�޲ι��캯��
	{
		x = 0;
		y = 0;
	}
	Point(double x, double y)//����xy�ض�ֵ
	{
		this->x = x;
		this->y = y;

	}

	double getx()
	{
		return x;

	}
	double gety()
	{
		return y;

	}
	friend double Cout(Point a, Point b)
	{
		cout << "������Ϊ�� " << endl;
		cout << "a" << "(" << a.getx() << "," << a.gety() << ")" << endl;
		cout << "b" << "(" << b.getx() << "," << b.gety() << ")" << endl;
		return 0;
	}
	friend double Distance(Point a, Point b)
	{

		return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));

	}

};