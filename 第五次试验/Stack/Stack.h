/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-11-17 / 14:22
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once
#include <iostream>
using namespace std;

const int MAXSIZE = 5;
/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Stack
{

private:

	int top;
	double data[MAXSIZE];

public:

	Stack();
	~Stack();

	bool IsFull();//�ж��Ƿ�Ϊ��ջ
	bool IsEmpty();//�ж��Ƿ�Ϊ��ջ

	void Push(double val);//��ջ
	double Pop();//��ջ

	int GetSize();

};

/*----------------------------------*
    ���г�Ա��������
*-----------------------------------*/

Stack::Stack()//��ʼ��ջ
{
	top = 0;

	memset(data, 0, sizeof(data));
}

Stack::~Stack()//��������
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


