/*************************************************
** ���� : һ��ʮ��
** ���� : tsingke
** ���� : 2020-11-21 / 19:38
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Point.h"

using namespace std;

/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	double x1, y1, x2, y2;

	cout << "������a������꣺";
	cin >> x1;

	cout << "������a�������꣺";
	cin >> y1;

	cout << "������b������꣺";
	cin >> x2;

	cout << "������b�������꣺";
	cin >> y2;

	Point a(x1, y1);
	Point b(x2, y2);

	Cout(a, b);

	cout << "����֮�����Ϊ�� " << Distance(a, b) << endl;

	system("pause");

	return 0;
}