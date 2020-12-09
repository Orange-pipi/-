/*************************************************
** 源文件   : Base.cpp
** 功能说明 : 定义 Base类 中的函数
** 创建时间 : 2020-12-8/11:20
** 创建： Orange-pipi
/**************************************************/

/*----------------头文件引入--------------*/

#include "Base.h"


/*----------------类中函数定义-------------*/

int Base::count = 0;

Base::Base()
{
	a = 1;
	b = 2;
	c = 3;
	count++;

	cout << "基类构造函数被调用！" << endl;
}

Base::~Base()
{
	count--;

	cout << "基类析构函数被调用！" << endl;

	system("pause");
}

void Base::classPrint()//输出成员
{
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
}

int Base::statistic()//统计生成对象个数
{
	return count;
}

Derived1::Derived1()
{
	count++;

	cout << "派生类1构造函数被调用！" << endl;
}

Derived1::~Derived1()
{
	count--;

	cout << "派生类1析构函数被调用！" << endl;

	system("pause");
}

void Derived1::class1Print()
{	
	classPrint();//继承后为public属性，无所畏惧。

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	//cout << "c= " << c << endl;//(取消注释后报错) 公有继承后，基类私有成员数据不可以被派生类函数访问。
}

Derived2::Derived2()
{
	count++;

	cout << "派生类2构造函数被调用！" << endl;
}

Derived2::~Derived2()
{
	count--;

	cout << "派生类2析构函数被调用！" << endl;

	system("pause");
}

void Derived2::class2Print()
{
	classPrint();//继承后为protected属性，只能被派生类公有成员函数调用后才能在类外使用。
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	//cout << "c= " << c << endl;//(取消注释后报错) 受保护继承后，基类私有成员数据不可以被派生类函数访问。
}

Derived3::Derived3()
{
	count++;

	cout << "派生类3构造函数被调用！" << endl;
}

Derived3::~Derived3()
{
	count--;

	cout << "派生类3析构函数被调用！" << endl;

	system("pause");
}

void Derived3::class3Print()
{
	classPrint();//继承后为private属性只能由派生类公有成员函数调用才能在类外使用。
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	//cout << "c= " << c << endl;//(取消注释后报错) 私有继承后，基类私有成员数据不可以被派生类函数访问。
}