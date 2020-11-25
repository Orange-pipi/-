/*************************************************
** 源文件   : Graduate.cpp
** 功能说明 : 定义 Graduate类 中的函数
** 创建时间 : 2020-11-23/18:18
** 创建： Orange-pipi
/**************************************************/

/*----------------头文件引入--------------*/

#include "Graduate.h"


/*----------------类中函数定义-------------*/

Graduate::Graduate() :university("sdnu")
{
	gender = false;
	id = 0;
	score = 100;
}

Graduate::Graduate(string _name, bool _gender, int _id, double _score,
	string _reserch, string _tutor) :university("sdnu")
{
	name = _name;
	gender = _gender;
	id = _id;
	score = _score;
	research = _reserch; 
	tutor = _tutor;
}

Graduate::Graduate(const Graduate& stu):university("sdnu")
{

	name = stu.name;
	gender = stu.gender;
	id = stu.id;
	score = stu.score;
	research = stu.research;
	tutor = stu.tutor;
}

Graduate::~Graduate()
{

}

void Graduate::Copy(const Graduate& stu)
{
	name = stu.name;
	gender = stu.gender;
	id = stu.id;
	score = stu.score;
	research = stu.research;
	tutor = stu.tutor;
}

void Graduate::Input()
{
	cout << "请输入姓名： " << endl;
	cin >> name;

	cout << "请输入性别代码(1:男，0:女)： " << endl;
	cin >> gender;

	cout << "请输入学号：" << endl;
	cin >> id;

	cout << "请输入入学成绩： " << endl;
	cin >> score;

	cout << "请输入研究方向： " << endl;
	cin >> research;

	cout << "请输入导师姓名： " << endl;
	cin >> tutor;
}

double Graduate::GetScore()
{
	return score;
}

void Graduate::Display()
{
	cout << "***************************" << endl;
	cout << "姓    名： " << name << endl;
	cout << "性    别： " << gender << endl;
	cout << "学    号： " << id << endl;
	cout << "入学成绩： " << score << endl;
	cout << "研究领域： " << research << endl;
	cout << "导    师： " << tutor << endl;
	cout << "学    校： " << university << endl;
	cout << "***************************" << endl;
}

double Graduate::CountAverage(Graduate* _array, int _count)
{
	double sum = 0;

	for (int i = 0; i < _count; i++)
	{
			sum += _array[i].score;
	}
	cout << "总人数： " << _count << endl;

	return sum / _count;
}