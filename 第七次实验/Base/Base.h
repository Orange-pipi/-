/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-12-8 / 10:39
** 作者： Orange-pipi
/**************************************************/

#pragma once//保证同一文件不会被编译多次
#include <iostream>
using namespace std;


/*----------------------------------*
	类定义
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

	void classPrint();//输出类的成员
	static int statistic();//统计生成对象的个数

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

