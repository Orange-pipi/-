/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-11-20 / 12:10
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once//��֤ͬһ�ļ����ᱻ������
#include <iostream>
#include <cstring>
using namespace std;


/*----------------------------------*
	�ඨ��
*-----------------------------------*/

class Student
{
	//�������Ա�ѧ�š��������ڡ���ͥסַ��6����Ŀ�Ŀ��Գɼ�
private:
	char* name;
	char sex[7];
	char stuNumber[13];
	char birth[11];
	char* address;
	double chineseScore, mathScore, englishScore, moralScore, scienceScore, computerScore;

public:

	//��ʼ��ѧ�������
	Student();
	Student(char* na, char* se, char* num, char* bir, char* addr);
	Student(double ch, double math, double en, double moral, double sci, double comp);
	Student(const Student &stu);
	~Student();

	//��ȡѧ��������Ϣ
	char* GetName();
	char* GetSex();
	char* GetStuNumber();
	char* GetBirth();
	char* GetAddress();

	double GetChineseScore();
	double GetMathScore();
	double GetEnglishScore();
	double GetMoralScore();
	double GetScienceScore();
	double GetComputerScore();


	void Input();//����ѧ����Ϣ
	void Update();//�޸�ѧ����Ϣ
	void Display();//չʾѧ����Ϣ

	};

	
