/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-12-14 / 16:01
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once//��֤ͬһ�ļ����ᱻ������
#include <iostream>
using namespace std;


/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Array
{
	//�����Сsize������ָ�����ps��
	//�������ӿڹ��ܣ�������һ����������������ݡ��޸���������Ԫ�ء�
	//ʵ���������ĸ�ֵ�������ӷ���������Ա��������������������Ԫ������

private:

	int size;
	int* ps;

public:

	Array();
	Array(int i);
	Array(Array &_arr);
	~Array();

	void Print();//�������
	void Update(int i, int &x);//�޸�Ԫ��

	Array &operator =(Array &_arr);//��ֵ
	Array &operator +=(Array &_arr1);
	friend Array &operator -=(Array &_arr1, Array &_arr2);

};