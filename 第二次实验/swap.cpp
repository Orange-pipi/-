/*************************************************
** ���� : һ��ʮ��
** ���� : tsingke
** ���� : 2020-10-14 / 11:46
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