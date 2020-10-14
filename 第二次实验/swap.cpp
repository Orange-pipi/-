/*************************************************
** 功能 : 一键十行
** 作者 : tsingke
** 创建 : 2020-10-14 / 11:46
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

/*----------------------------------*
		 Class Definition
*-----------------------------------*/



/*----------------------------------*
		Global Definition
*-----------------------------------*/

void swap(int* a, int* b)
{

	int c;
	c = *a;
	*a = *b;
	*b = c;

}


/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{

	int a, b;
	cin >> a >> b;
	int* p1 = &a;
	int* p2 = &b;
	swap(p1, p2);
	cout << a << " " << b << endl;


	system("pause");

	return 0;
}