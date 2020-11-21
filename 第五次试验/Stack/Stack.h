/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-11-17 / 14:22
** 作者： Orange-pipi
/**************************************************/

#pragma once
#include <iostream>
using namespace std;

const int MAXSIZE = 5;
/*----------------------------------*
	类定义
*-----------------------------------*/

class Stack
{

private:

	int top;
	double data[MAXSIZE];

public:

	Stack();
	~Stack();

	bool IsFull();//判断是否为满栈
	bool IsEmpty();//判断是否为空栈

	void Push(double val);//入栈
	double Pop();//出栈

	int GetSize();

};

/*----------------------------------*
    类中成员函数定义
*-----------------------------------*/

Stack::Stack()//初始化栈
{
	top = 0;

	memset(data, 0, sizeof(data));
}

Stack::~Stack()//析构函数
{

}

bool Stack::IsEmpty()
{
	return top == 0;
}

bool Stack::IsFull()
{
	return top == MAXSIZE;
}

void Stack::Push(double val)
{
	data[top++] = val;
}

double Stack::Pop()
{
	return data[--top];
}

int Stack::GetSize()
{
	return top;
}


