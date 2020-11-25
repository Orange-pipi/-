/*************************************************
** Դ�ļ�   : Graduate.cpp
** ����˵�� : ���� Graduate�� �еĺ���
** ����ʱ�� : 2020-11-23/18:18
** ������ Orange-pipi
/**************************************************/

/*----------------ͷ�ļ�����--------------*/

#include "Graduate.h"


/*----------------���к�������-------------*/

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
	cout << "������������ " << endl;
	cin >> name;

	cout << "�������Ա����(1:�У�0:Ů)�� " << endl;
	cin >> gender;

	cout << "������ѧ�ţ�" << endl;
	cin >> id;

	cout << "��������ѧ�ɼ��� " << endl;
	cin >> score;

	cout << "�������о����� " << endl;
	cin >> research;

	cout << "�����뵼ʦ������ " << endl;
	cin >> tutor;
}

double Graduate::GetScore()
{
	return score;
}

void Graduate::Display()
{
	cout << "***************************" << endl;
	cout << "��    ���� " << name << endl;
	cout << "��    �� " << gender << endl;
	cout << "ѧ    �ţ� " << id << endl;
	cout << "��ѧ�ɼ��� " << score << endl;
	cout << "�о����� " << research << endl;
	cout << "��    ʦ�� " << tutor << endl;
	cout << "ѧ    У�� " << university << endl;
	cout << "***************************" << endl;
}

double Graduate::CountAverage(Graduate* _array, int _count)
{
	double sum = 0;

	for (int i = 0; i < _count; i++)
	{
			sum += _array[i].score;
	}
	cout << "�������� " << _count << endl;

	return sum / _count;
}