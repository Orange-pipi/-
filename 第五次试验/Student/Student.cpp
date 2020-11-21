/*************************************************
** 源文件   : Student.cpp
** 功能说明 : 定义 Student类 中的函数
** 创建时间 : 2020-11-21/09:27
** 创建： Orange-pipi
/**************************************************/

/*----------------头文件引入--------------*/

#include "Student.h"


/*----------------类中函数定义-------------*/

Student::Student()
{
	name = NULL;
	address = NULL;
	chineseScore = mathScore = englishScore = moralScore = scienceScore = computerScore = 0;
}

Student::Student(char* na, char* se, char* num, char* bir, char* addr)//学生基本信息
{
	if (na)
	{
		name = new char[strlen(na) + 1];

		strcpy_s(name, strlen(na) + 1, na);
	}


	strcpy_s(sex, se);

	strcpy_s(stuNumber, num);

	strcpy_s(birth, bir);

	if (addr)
	{
		address = new char[strlen(addr) + 1];

		strcpy_s(address, strlen(addr) + 1, addr);

	}

}

Student::Student(double ch, double math, double en, double moral, double sci, double comp)//学生成绩信息
{
	chineseScore = ch;
	mathScore = math;
	englishScore = en;
	moralScore = moral;
	scienceScore = sci;
	computerScore = comp;
}

Student::Student(const Student &stu)
{
	if (stu.name)
	{
		name = new char[strlen(stu.name) + 1];

		strcpy_s(name, strlen(stu.name) + 1, stu.name);
	}


	strcpy_s(sex, stu.sex);

	strcpy_s(stuNumber, stu.stuNumber);

	strcpy_s(birth, stu.birth);

	if (stu.address)
	{
		address = new char[strlen(stu.address) + 1];

		strcpy_s(address, strlen(stu.address) + 1, stu.address);

	}

}

Student::~Student()
{
	if (name)
	{
		delete[]name;
	}

	if (address)
	{
		delete[]address;
	}
}

//基本信息获取
char * Student::GetName()
{
	return name;
}

char * Student::GetSex()
{
	return sex;
}

char * Student::GetStuNumber()
{
	return stuNumber;
}

char * Student::GetBirth()
{
	return birth;
}

char * Student::GetAddress()
{
	return address;
}

double Student::GetChineseScore()
{
	return chineseScore;
}

double Student::GetMathScore()
{
	return mathScore;
}

double Student::GetEnglishScore()
{
	return englishScore;
}

double Student::GetMoralScore()
{
	return moralScore;
}

double Student::GetScienceScore()
{
	return scienceScore;
}

double Student::GetComputerScore()
{
	return computerScore;
}

//首次录入信息
void Student::Input()
{
	char na[20];

	cout << "请输入姓名： ";




	cin >> na;

	if (name)
	{
		delete name;
	}

	name = new char[strlen(na) + 1];

	strcpy_s(name, strlen(na) + 1, na);

	cout << "请输入性别(male/female)： ";
	
	cin >> sex;

	cout << "请输入学号： ";

	cin >> stuNumber;

	cout << "请输入生日(xxxx-xx-xx)： ";

	cin >> birth;

	char addr[30];

	cout << "请输入地址(Shandong-Jinan-Changqing)： ";




	cin >> addr;

	if (address)
	{
		delete address;
	}

	address = new char[strlen(addr) + 1];

	strcpy_s(address, strlen(addr) + 1, addr);

	cout << "请输入成绩(语文 数学 英语 思想品德 科学 计算机)： ";

	cin >> chineseScore >> mathScore >> englishScore >> moralScore >> scienceScore >> computerScore;

	cout << "信息录入完毕！" << endl;
}

//更新学生成绩信息
void Student::Update()
{
	int sub;
	double score;

	cout << "请输入科目代号(1.语文 2.数学 3.英语 4.思想品德 5.科学 6.计算机)： ";
	
	cin >> sub;

	cout << "请输入最新成绩：";

	cin >> score;

	switch (sub)
	{
	case 1:
		chineseScore = score;
		break;
	case 2:
		mathScore = score;
		break;
	case 3:
		englishScore = score;
		break;
	case 4:
		moralScore = score;
		break;
	case 5:
		scienceScore = score;
		break;
	case 6:
		computerScore = score;
		break;
	}

	cout << "成绩更新完毕！" << endl;

}

//学生信息一览
void Student::Display()
{
	//cout << "学生姓名： " << name << "性别： " << sex << "生日： " << birth << endl;
	//cout << "学号： " << stuNumber << "地址： " << address << endl;

	//cout << "语文： " << chineseScore << "数学： " << mathScore << "英语： " << englishScore << endl;
	//cout << "思想品德： " << moralScore << "科学： " << scienceScore << "计算机： " << computerScore << endl;
	cout << "学生姓名：\t" << name << "\t\t\t\t储存地址：" << (void*)name << endl;
	cout << "性别： \t\t" << sex << "\t\t\t\t储存地址：" << (void*)sex << endl;
	cout << "生日： \t\t" << birth << "\t\t\t储存地址：" << (void*)birth << endl;
	cout << "学号： \t\t" << stuNumber << "\t\t\t储存地址：" << (void*)stuNumber << endl;
	cout << "地址： \t\t" << address << "\t储存地址：" << (void*)address << endl;
	cout << "语文： \t\t" << chineseScore << "\t\t\t\t储存地址：" << &chineseScore << endl;
	cout << "数学： \t\t" << mathScore << "\t\t\t\t储存地址：" << &mathScore << endl;
	cout << "英语： \t\t" << englishScore << "\t\t\t\t储存地址：" << &englishScore << endl;
	cout << "思想品德：\t" << moralScore << "\t\t\t\t储存地址：" << &moralScore << endl;
	cout << "科学： \t\t"  << scienceScore << "\t\t\t\t储存地址：" << &scienceScore << endl;
	cout << "计算机：\t" << computerScore << "\t\t\t\t储存地址：" << &computerScore << endl;
}