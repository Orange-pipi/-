/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-11-20 / 09:08
** 作者： Orange-pipi
/**************************************************/

#pragma once
#include <iostream>
#include"stdlib.h"
#include"string"

using namespace std;

/*----------------------------------*
	类定义
*-----------------------------------*/

class Mystring
{
private:

	char a, b;

public:

	int MyLink(char *str1, char *str2);//连接
	int MyLength(char *p);//长度测量
	void MyStrcump(char *str1, char *str2);//比较
	int MyReverse(char *str1);//反转

};


	
