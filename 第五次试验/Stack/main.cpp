/*************************************************
** ���� : һ��ʮ��  
** ���� : tsingke
** ���� : 2020-11-16 / 10:23
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Stack.h"

using namespace std;



/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	cout << "******����******" << endl;

	Stack s;

	cout << "��ǰջ��СΪ" << s.GetSize() << endl;

	double temp;

	while (!s.IsFull())//��ջ����
	{
		cout << "����������:" << endl;

		cin >> temp;

		s.Push(temp);

		cout << temp << "����ջ" << endl;

	}

	cout << "ջ���������:" << endl;

	while (!s.IsEmpty())//��ջ����
	{
		cout << s.Pop() << endl;
	}
	
	cout << "******���Խ���******" << endl;
	
	system("pause");
	
	return 0;
}