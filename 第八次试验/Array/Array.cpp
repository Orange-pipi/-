/*************************************************
** 源文件   : Array.cpp
** 功能说明 : 定义 Array类 中的函数
** 创建时间 : 2020-12-14/16:24
** 创建： Orange-pipi
/**************************************************/

/*----------------头文件引入--------------*/

#include "Array.h"


/*----------------类中函数定义-------------*/

Array::Array()
{
	size = 1;
	ps = new int[size];
	ps[0] = 0;
}

Array::Array(int i)
{
	size = i;
	ps = new int[size];

	for (int i = 0; i < size; i++)
	{
		ps[i] = 0;
	}
}

Array::Array(Array &_arr)
{
	size = _arr.size;
	ps = new int[_arr.size];

	for (int i = 0; i < size; i++)
	{
		ps[i] = _arr.ps[i];
	}
}

Array::~Array()
{
	delete[]ps;
}

void Array::Print()
{
	for (int i = 0; i < size; i++)
	{
		cout << ps[i] << " ";
	}
	cout << endl;
}

void Array::Update(int i, int &x)
{
	if (i < size)
	{
		ps[i-1] = x;
	}
	else
	{
		cout << "超出数组范围！" << endl;
	}
}

Array & Array::operator =(Array &_arr1)
{
	if (this->ps)
	{
		delete[] ps;
	}

	if (_arr1.ps)
	{
		this->ps = new int[_arr1.size];
	}

	this->size = _arr1.size;

	for (int i = 0; i < this->size; i++)
	{
		this->ps[i] = _arr1.ps[i];
	}


	return *this;
}

Array & Array::operator +=(Array &_arr1)
{
	int temp = size > _arr1.size ? _arr1.size : size;

	for (int i = 0; i < temp; i++)
	{
		ps[i] += _arr1.ps[i];
	}

	return *this;
}

Array & operator -=(Array &_arr1, Array &_arr2)
{
	int temp = _arr1.size > _arr2.size ? _arr2.size : _arr1.size;

	for (int i = 0; i < temp; i++)
	{
		_arr1.ps[i] -= _arr2.ps[i];
	}

	return _arr1;
}