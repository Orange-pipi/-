/*************************************************
** ���� : һ��ʮ��  
** ���� : tsingke
** ���� : 2020-10-14 / 15:29
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
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
	double a, b, c;//���������α߳�
	int flag;
	double l, s;

public:
	void testValue(double a, double b, double c);

	int checkTriangle()//�����������Ƿ����
	{
		if (a + b > c && a + c > b && b + c > a)
			return flag = 1;
		else
			return flag = 0;
	}

	double lengthTriangle()//�����ܳ�
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

	double areaTriangle()//�������
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
	cout << "�����������߳���" << endl;
	cin >> l1 >> l2 >> l3;

	aa.testValue(l1, l2, l3);
	double area = aa.areaTriangle();
	if (area == 0)
	{

		cout << "�޷����������Σ�" << endl;

	}
	else
		cout << area << endl;




	system("pause");
	
	return 0;
}
