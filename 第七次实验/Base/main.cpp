/*************************************************
** ���� : һ��ʮ��  
** ���� : tsingke
** ���� : 2020-12-9 / 14:21
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "Base.h"

using namespace std;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{

	Base base;
	Derived1 derived1;
	Derived2 derived2;
	Derived3 derived3;

	cout << "֤��������������л��౾���Ա��ʵ�ַ�ʽ��sizeof����" << endl;

	cout << "sizeof(base)= " << sizeof(base) << endl;
	cout << "sizeof(derived1)= " << sizeof(derived1) << endl;
	cout << "sizeof(derived2)= " << sizeof(derived2) << endl;
	cout << "sizeof(derived3)= " << sizeof(derived3) << endl;

	cout << "�̳к����public��Ա�������Ա仯������������������" << endl;

	derived1.classPrint();//���м̳к�public��Ա������Ȼ��public���ԣ����Ա����ʣ�����ͨ�������ʻ���˽�����ݡ�
	//derived2.classPrint();//(ȡ��ע�ͺ󱨴�) �ܱ����̳к�public��Ա������Ϊprotected���ԣ������Ա����ʡ�
	//derived3.classprint();//(ȡ��ע�ͺ󱨴�) ˽�м̳к�public��Ա������Ϊprivate���ԣ������Ա�����

	cout << "���м̳к�������Ի����Ա�ĵ��ã�" << endl;

	derived1.class1Print();

	cout << "�ܱ����̳к�������Ի����Ա�ĵ��ã�" << endl;

	derived2.class2Print();

	cout << "˽�м̳к�������Ի����Ա�ĵ��ã�" << endl;

	derived3.class3Print();



	system("pause");
	
	return 0;

}

/*----------------------------------*
          Ordinary Function
*-----------------------------------*/

