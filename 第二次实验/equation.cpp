/*************************************************
** 功能 : 一键十行  
** 作者 : tsingke
** 创建 : 2020-10-14 / 09:01
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
	
void findRoot(const float* a, const float* b, const float* c)//解二次方程:ax²+bx+c=0
{

	float x1, x2, delta, realpart, imagpart;
	delta = pow((*b), 2) - 4 * (*a) * (*c);//δ判定式

	if (*a == 0)//判定二次方程
		cout << "警告：此方程不是二次方程，a必须不为0" << endl;
	
	else
	{

		if (delta > 0)
		{

			x1 = (-(*b) + sqrt(delta)) / (2 * (*a));
			x2 = (-(*b) - sqrt(delta)) / (2 * (*a));
			cout << "方程有两个不等实数根:x1=" << x1 << " x2=" << x2 << endl;
		}

		else if (delta == 0)
		{

			x1 = (-(*b) + sqrt(delta)) / (2 * (*a));
			cout << "方程有两个相等的实数根:x1=x2=" << x1 << endl;

		}

		else
		{

			realpart = -(*b) / (2 * (*a));//实部
			imagpart = sqrt(-delta) / (2 * (*a));//虚部
			printf_s("方程有两个共轭复根：x1+%f+%fi ，", realpart, imagpart);
			printf_s("%f-%fi\n", realpart, imagpart);

		}
	}

}



/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{

	float a, b, c;
	cin >> a >> b >> c;//输入a，b，c的值

	const float* p1 = &a;
	const float* p2 = &b;
	const float* p3 = &c;

	findRoot(p1, p2, p3);


	system("pause");
	
	return 0;
}