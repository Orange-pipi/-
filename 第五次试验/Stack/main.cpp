/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-11-16 / 10:23
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Stack.h"

using namespace std;



/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	cout << "******测试******" << endl;

	Stack s;

	cout << "当前栈大小为" << s.GetSize() << endl;

	double temp;

	while (!s.IsFull())//入栈操作
	{
		cout << "请输入数据:" << endl;

		cin >> temp;

		s.Push(temp);

		cout << temp << "已入栈" << endl;

	}

	cout << "栈中数据输出:" << endl;

	while (!s.IsEmpty())//出栈操作
	{
		cout << s.Pop() << endl;
	}
	
	cout << "******测试结束******" << endl;
	
	system("pause");
	
	return 0;
}