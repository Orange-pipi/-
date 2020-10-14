/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-10-14 / 15:29
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
	
class Triangle
{

private:
	double a, b, c;//定义三角形边长
	int flag;
	double l, s;

public:
	void testValue(double a, double b, double c);

	int checkTriangle()//检验三角形是否成立
	{
		if (a + b > c && a + c > b && b + c > a)
			return flag = 1;
		else
			return flag = 0;
	}

	double lengthTriangle()//计算周长
	{
		checkTriangle();
		if (flag == 1)
		{

			l = a + b + c;
			return l;

		}

		else
			return 0;

	}

	double areaTriangle()//计算面积
	{
		checkTriangle();
		if (flag == 1)
		{

			double p = (a + b + c) / 2;
			s = sqrt(p*(p - a)*(p - b)*(p - c));
			return s;

		}

		else
			return 0;

	}


};

/*----------------------------------*
		Global Definition
*-----------------------------------*/

void Triangle::testValue(double p1, double p2, double p3)
{

	this->a = p1;
	this->b = p2;
	this->c = p3;

}


/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	Triangle aa;
	double l1, l2, l3;
	cout << "请输入三条边长：" << endl;
	cin >> l1 >> l2 >> l3;

	aa.testValue(l1, l2, l3);
	double area = aa.areaTriangle();
	if (area == 0)
	{

		cout << "无法构成三角形！" << endl;

	}
	else
		cout << area << endl;




	system("pause");
	
	return 0;
}
