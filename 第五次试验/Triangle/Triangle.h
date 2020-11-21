/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-11-20 / 10:07
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Triangle
{

private:

	double a, b, c;
	int flag;

public:

	Triangle(double, double, double);
	~Triangle();

	int Check();//�����������Ƿ����
	double TriangleLength();//���ܳ�
	double TriangleArea();//�����
	int TriangleType();//����������

};

/*----------------------------------*
	���г�Ա��������
*-----------------------------------*/
Triangle::Triangle(double p1, double p2, double p3)
{
	a = p1;
	b = p2;
	c = p3;
}

Triangle::~Triangle()
{

}

int Triangle::Check()
{
	return a + b > c&&a + c > b&&b + c > a;
}

double Triangle::TriangleLength()
{
	if (Check())
	{
		return a + b + c;
	}
	else
	{
		return 0;
	}
}

double Triangle::TriangleArea()
{
	if (Check())
	{
		double p = (a + b + c) / 2;
		return sqrt(p*(p - a)*(p - b)*(p - c));
	}
	else
	{
		return 0;
	}
}

int Triangle::TriangleType()
{
	double A, B, C;
	A = b * b + c * c - a * a;
	B = a * a + c * c - b * b;
	C = a * a + b * b - c * c;

	if (A == 0 || B == 0 || C == 0)
	{
		return 0;
	}
	else if (A > 0 && B > 0 && C > 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
