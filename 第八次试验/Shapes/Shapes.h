/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-12-16 / 16:15
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once//��֤ͬһ�ļ����ᱻ������
#include <iostream>
using namespace std;


/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Shapes
{
public:

	virtual void Display() = 0;
};

class Rectangles : public Shapes
{
public:

	void Display();
};

class Circle : public Shapes
{
public:

	void Display();
};