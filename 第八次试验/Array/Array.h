/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-12-14 / 16:01
** 作者： Orange-pipi
/**************************************************/

#pragma once//保证同一文件不会被编译多次
#include <iostream>
using namespace std;


/*----------------------------------*
	类定义
*-----------------------------------*/

class Array
{
	//数组大小size，数组指针变量ps，
	//该类对外接口功能：（三构一析）、输出对象内容、修改数组对象的元素、
	//实现数组对象的赋值操作，加法操作（成员函数）、减法操作（友元函数）

private:

	int size;
	int* ps;

public:

	Array();
	Array(int i);
	Array(Array &_arr);
	~Array();

	void Print();//输出内容
	void Update(int i, int &x);//修改元素

	Array &operator =(Array &_arr);//赋值
	Array &operator +=(Array &_arr1);
	friend Array &operator -=(Array &_arr1, Array &_arr2);

};