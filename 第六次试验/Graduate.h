/*************************************************
** ����˵�� : ������ͳ�Ա����
** ���� : 2020-11-23 / 11:08
** ���ߣ� Orange-pipi
/**************************************************/

#pragma once//��֤ͬһ�ļ����ᱻ������
#include <iostream>
#include <string>
using namespace std;


/*----------------------------------*
	�ඨ��
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

	double CountAverage(Graduate* _array, int _count);//��ƽ���ɼ�

	friend void Ranking(Graduate* _array, int _count);//�ɼ��ȼ�

};