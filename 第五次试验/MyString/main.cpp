/*************************************************
** ���� : һ��ʮ��  
** ���� : tsingke
** ���� : 2020-11-20 / 09:08
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
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

	cout << "�ַ������ӣ������������ַ���" << endl;

	cin >> a >> b;

	str.MyLink(a, b);

	cout << a << endl;

	char c[10];

	cout << "�ַ������Ȳ�����������һ���ַ���" << endl;

	cin >> c;

	cout << "�ַ����ĳ����ǣ�" << str.MyLength(c) << endl;

	char d[100], e[100];

	cout << "�ַ����Ƚϣ������������ַ���" << endl;

	cin >> d >> e;

	str.MyStrcump(d, e);


	char f[100];
	cout << "�ַ�����ת��������һ���ַ���" << endl;
	cin >> f;

	str.MyReverse(f);


	system("pause");



	return 0;
}
