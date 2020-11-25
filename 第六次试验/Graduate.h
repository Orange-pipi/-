/*************************************************
** 功能说明 : 定义类和成员函数
** 创建 : 2020-11-23 / 11:08
** 作者： Orange-pipi
/**************************************************/

#pragma once//保证同一文件不会被编译多次
#include <iostream>
#include <string>
using namespace std;


/*----------------------------------*
	类定义
*-----------------------------------*/

class Graduate
{
private:

	string name;
	bool gender;
	int id;
	double score;
	string research;
	string tutor;
	const string university;


public:

	Graduate();
	Graduate(string _name, bool _gender, int _id, double _score, string _reserch, string _tutor);
	Graduate(const Graduate& stu);
	~Graduate();

	void Copy(const Graduate& stu);

	void Input();

	double GetScore();

	void Display();

	double CountAverage(Graduate* _array, int _count);//求平均成绩

	friend void Ranking(Graduate* _array, int _count);//成绩等级

};