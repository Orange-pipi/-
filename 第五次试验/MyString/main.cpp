/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-11-20 / 09:08
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "MyString.h"

using namespace std;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	Mystring str;

	char a[100], b[100];

	cout << "字符串连接：请输入两个字符串" << endl;

	cin >> a >> b;

	str.MyLink(a, b);

	cout << a << endl;

	char c[10];

	cout << "字符串长度测量：请输入一个字符串" << endl;

	cin >> c;

	cout << "字符串的长度是：" << str.MyLength(c) << endl;

	char d[100], e[100];

	cout << "字符串比较：请输入两个字符串" << endl;

	cin >> d >> e;

	str.MyStrcump(d, e);


	char f[100];
	cout << "字符串反转；请输入一个字符串" << endl;
	cin >> f;

	str.MyReverse(f);


	system("pause");



	return 0;
}
