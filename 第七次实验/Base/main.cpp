/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-12-9 / 14:21
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Base.h"

using namespace std;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{

	Base base;
	Derived1 derived1;
	Derived2 derived2;
	Derived3 derived3;

	cout << "证明派生类接受所有基类本类成员，实现方式：sizeof（）" << endl;

	cout << "sizeof(base)= " << sizeof(base) << endl;
	cout << "sizeof(derived1)= " << sizeof(derived1) << endl;
	cout << "sizeof(derived2)= " << sizeof(derived2) << endl;
	cout << "sizeof(derived3)= " << sizeof(derived3) << endl;

	cout << "继承后基类public成员函数属性变化，被派生类调用情况：" << endl;

	derived1.classPrint();//公有继承后public成员函数依然是public属性，可以被访问，可以通过它访问基类私有数据。
	//derived2.classPrint();//(取消注释后报错) 受保护继承后public成员函数变为protected属性，不可以被访问。
	//derived3.classprint();//(取消注释后报错) 私有继承后public成员函数变为private属性，不可以被访问

	cout << "公有继承后派生类对基类成员的调用：" << endl;

	derived1.class1Print();

	cout << "受保护继承后派生类对基类成员的调用：" << endl;

	derived2.class2Print();

	cout << "私有继承后派生类对基类成员的调用：" << endl;

	derived3.class3Print();



	system("pause");
	
	return 0;

}

/*----------------------------------*
          Ordinary Function
*-----------------------------------*/

