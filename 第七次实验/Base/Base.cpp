/*************************************************
** Դ�ļ�   : Base.cpp
** ����˵�� : ���� Base�� �еĺ���
** ����ʱ�� : 2020-12-8/11:20
** ������ Orange-pipi
/**************************************************/

/*----------------ͷ�ļ�����--------------*/

#include "Base.h"


/*----------------���к�������-------------*/

int Base::count = 0;

Base::Base()
{
	a = 1;
	b = 2;
	c = 3;
	count++;

	cout << "���๹�캯�������ã�" << endl;
}

Base::~Base()
{
	count--;

	cout << "�����������������ã�" << endl;

	system("pause");
}

void Base::classPrint()//�����Ա
{
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
}

int Base::statistic()//ͳ�����ɶ������
{
	return count;
}

Derived1::Derived1()
{
	count++;

	cout << "������1���캯�������ã�" << endl;
}

Derived1::~Derived1()
{
	count--;

	cout << "������1�������������ã�" << endl;

	system("pause");
}

void Derived1::class1Print()
{	
	classPrint();//�̳к�Ϊpublic���ԣ�����η�塣

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	//cout << "c= " << c << endl;//(ȡ��ע�ͺ󱨴�) ���м̳к󣬻���˽�г�Ա���ݲ����Ա������ຯ�����ʡ�
}

Derived2::Derived2()
{
	count++;

	cout << "������2���캯�������ã�" << endl;
}

Derived2::~Derived2()
{
	count--;

	cout << "������2�������������ã�" << endl;

	system("pause");
}

void Derived2::class2Print()
{
	classPrint();//�̳к�Ϊprotected���ԣ�ֻ�ܱ������๫�г�Ա�������ú����������ʹ�á�
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	//cout << "c= " << c << endl;//(ȡ��ע�ͺ󱨴�) �ܱ����̳к󣬻���˽�г�Ա���ݲ����Ա������ຯ�����ʡ�
}

Derived3::Derived3()
{
	count++;

	cout << "������3���캯�������ã�" << endl;
}

Derived3::~Derived3()
{
	count--;

	cout << "������3�������������ã�" << endl;

	system("pause");
}

void Derived3::class3Print()
{
	classPrint();//�̳к�Ϊprivate����ֻ���������๫�г�Ա�������ò���������ʹ�á�
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	//cout << "c= " << c << endl;//(ȡ��ע�ͺ󱨴�) ˽�м̳к󣬻���˽�г�Ա���ݲ����Ա������ຯ�����ʡ�
}