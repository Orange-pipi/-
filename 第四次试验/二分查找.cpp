/*************************************************
** 功能 : 一键十行
** 作者 : tsingke
** 创建 : 2020-10-27 / 21:12
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <cmath>

using namespace std;

/*----------------------------------*
		 Class Definition
*-----------------------------------*/



/*----------------------------------*
		Global Definition
*-----------------------------------*/

const double eps = 1e-10;

double fx(double x)//定义任意的某个函数f(x)
{
	double f = (x * x) - 10;

	return f;

}



double binarySearch(double &left, double &right)//二分法寻找函数的零点
{


	double middle = 0.5*(left + right);



	while (fabs(fx(middle)) > eps)
	{

		if (fx(left)*fx(middle) < 0)

		{
			right = middle;
		}
		else
		{
			left = middle;
		}

		middle = 0.5*(left + right);

	}

	return middle;
}

/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{

	double a, b;


	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	double c = binarySearch(a, b);

	cout << " x = " << c << endl;


	system("pause");

	return 0;
}