/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-11-20 / 12:10
** 作者： Orange-pipi
/**************************************************/

#pragma once//保证同一文件不会被编译多次
#include <iostream>
#include <cstring>
using namespace std;


/*----------------------------------*
	类定义
*-----------------------------------*/

class Student
{
	//姓名、性别、学号、出生日期、家庭住址、6个科目的考试成绩
private:
	char* name;
	char sex[7];
	char stuNumber[13];
	char birth[11];
	char* address;
	double chineseScore, mathScore, englishScore, moralScore, scienceScore, computerScore;

public:

	//初始化学生类对象
	Student();
	Student(char* na, char* se, char* num, char* bir, char* addr);
	Student(double ch, double math, double en, double moral, double sci, double comp);
	Student(const Student &stu);
	~Student();

	//获取学生任意信息
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


	void Input();//输入学生信息
	void Update();//修改学生信息
	void Display();//展示学生信息

	};

	
