#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

class Triangle
{
private:
	double a, b, c;//定义三角形边长
	int flag;
	double l, s;

public:
	void testTriangle(double a, double b, double c);

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




void Triangle::testTriangle(double p1, double p2, double p3)//参数传递
{

	this->a = p1;
	this->b = p2;
	this->c = p3;

}



int main()
{

	vector<int> count;//定义一个随输入加长度的数组
	cout << "请输入一组的边长：" << endl;

	int number;
	while (1)//在键盘输入边长个数
	{

		cin >> number;
		count.push_back(number);
		if (cin.get() == '\n')//检测到回车时结束
			break;

	}


	int len = count.size();//计算数组长度
	Triangle tri;//定义一个三角形对象


	vector<double> c;
	vector<double> s;
	//三层循环遍历
	for (int i = 0; i < len; i++)
	{

		for (int j = i + 1; j < len; j++)
		{

			for (int k = j + 1; k < len; k++)
			{

				tri.testTriangle(count[i], count[j], count[k]);
				c.push_back(tri.lengthTriangle());
				s.push_back(tri.areaTriangle());

			}

		}

	}

	int c_len = c.size();
	int s_len = s.size();

	int cMax = 0;
	int sMax = 0;

	//计算最大周长
	for (int i = 0; i < c_len; i++)
	{

		if (cMax < c[i])
			cMax = c[i];

	}
	cout <<"最大周长为： "<< cMax << endl;

	//计算最大面积
	for (int i = 0; i < s_len; i++)
	{

		if (sMax < s[i])
			sMax = s[i];

	}
	cout <<"最大面积为： "<< sMax << endl;



	system("pause");
	return 0;

}