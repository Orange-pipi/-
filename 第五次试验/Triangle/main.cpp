/*************************************************
** ���� : һ��ʮ��  
** ���� : tsingke
** ���� : 2020-11-18 / 17:58
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Triangle.h"

using namespace std;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	cout << "******����******" << endl;

	double num1, num2, num3;

	cout << "�����������������ߣ��ÿո����֣�" << endl;

	cin >> num1 >> num2 >> num3;

	Triangle a(num1, num2, num3);//��ʼ��������

	cout << a.Check() << endl;

	double l = a.TriangleLength();
	double s = a.TriangleArea();
	double ty = a.TriangleType();

	cout << "�������ܳ��ǣ� " << l << endl;

	cout << "����������ǣ� " << s << endl;

	if (ty == 1)
	{
		cout << "�����������������" << endl;
	}
	else if (ty == 0)
	{
		cout << "��������ֱ��������" << endl;
	}
	else
	{
		cout << "�������Ƕ۽�������" << endl;
	}

	cout << "******���Խ���******" << endl;

	system("pause");

	return 0;
}