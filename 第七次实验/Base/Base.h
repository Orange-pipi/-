/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-12-8 / 10:39
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once//��֤ͬһ�ļ����ᱻ������
#include <iostream>
using namespace std;


/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Base
{

private:
	
	int c;

protected:

	int b;

public:

	int a;
	static int count; 

	Base();
	~Base();

	void classPrint();//�����ĳ�Ա
	static int statistic();//ͳ�����ɶ���ĸ���

};

class Derived1 : public Base
{
public:

	Derived1();
	~Derived1();

	void class1Print();
};

class Derived2 : protected Base
{
public:

	Derived2();
	~Derived2();

	void class2Print();
};

class Derived3 : private Base
{
public:

	Derived3();
	~Derived3();

	void class3Print();
};

