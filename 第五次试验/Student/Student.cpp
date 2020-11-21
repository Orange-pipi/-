/*************************************************
** Դ�ļ�   : Student.cpp
** ����˵�� : ���� Student�� �еĺ���
** ����ʱ�� : 2020-11-21/09:27
** ������ Orange-pipi
/**************************************************/

/*----------------ͷ�ļ�����--------------*/

#include "Student.h"


/*----------------���к�������-------------*/

Student::Student()
{
	name = NULL;
	address = NULL;
	chineseScore = mathScore = englishScore = moralScore = scienceScore = computerScore = 0;
}

Student::Student(char* na, char* se, char* num, char* bir, char* addr)//ѧ��������Ϣ
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

Student::Student(double ch, double math, double en, double moral, double sci, double comp)//ѧ���ɼ���Ϣ
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

//������Ϣ��ȡ
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

//�״�¼����Ϣ
void Student::Input()
{
	char na[20];

	cout << "������������ ";




	cin >> na;

	if (name)
	{
		delete name;
	}

	name = new char[strlen(na) + 1];

	strcpy_s(name, strlen(na) + 1, na);

	cout << "�������Ա�(male/female)�� ";
	
	cin >> sex;

	cout << "������ѧ�ţ� ";

	cin >> stuNumber;

	cout << "����������(xxxx-xx-xx)�� ";

	cin >> birth;

	char addr[30];

	cout << "�������ַ(Shandong-Jinan-Changqing)�� ";




	cin >> addr;

	if (address)
	{
		delete address;
	}

	address = new char[strlen(addr) + 1];

	strcpy_s(address, strlen(addr) + 1, addr);

	cout << "������ɼ�(���� ��ѧ Ӣ�� ˼��Ʒ�� ��ѧ �����)�� ";

	cin >> chineseScore >> mathScore >> englishScore >> moralScore >> scienceScore >> computerScore;

	cout << "��Ϣ¼����ϣ�" << endl;
}

//����ѧ���ɼ���Ϣ
void Student::Update()
{
	int sub;
	double score;

	cout << "�������Ŀ����(1.���� 2.��ѧ 3.Ӣ�� 4.˼��Ʒ�� 5.��ѧ 6.�����)�� ";
	
	cin >> sub;

	cout << "���������³ɼ���";

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

	cout << "�ɼ�������ϣ�" << endl;

}

//ѧ����Ϣһ��
void Student::Display()
{
	//cout << "ѧ�������� " << name << "�Ա� " << sex << "���գ� " << birth << endl;
	//cout << "ѧ�ţ� " << stuNumber << "��ַ�� " << address << endl;

	//cout << "���ģ� " << chineseScore << "��ѧ�� " << mathScore << "Ӣ� " << englishScore << endl;
	//cout << "˼��Ʒ�£� " << moralScore << "��ѧ�� " << scienceScore << "������� " << computerScore << endl;
	cout << "ѧ��������\t" << name << "\t\t\t\t�����ַ��" << (void*)name << endl;
	cout << "�Ա� \t\t" << sex << "\t\t\t\t�����ַ��" << (void*)sex << endl;
	cout << "���գ� \t\t" << birth << "\t\t\t�����ַ��" << (void*)birth << endl;
	cout << "ѧ�ţ� \t\t" << stuNumber << "\t\t\t�����ַ��" << (void*)stuNumber << endl;
	cout << "��ַ�� \t\t" << address << "\t�����ַ��" << (void*)address << endl;
	cout << "���ģ� \t\t" << chineseScore << "\t\t\t\t�����ַ��" << &chineseScore << endl;
	cout << "��ѧ�� \t\t" << mathScore << "\t\t\t\t�����ַ��" << &mathScore << endl;
	cout << "Ӣ� \t\t" << englishScore << "\t\t\t\t�����ַ��" << &englishScore << endl;
	cout << "˼��Ʒ�£�\t" << moralScore << "\t\t\t\t�����ַ��" << &moralScore << endl;
	cout << "��ѧ�� \t\t"  << scienceScore << "\t\t\t\t�����ַ��" << &scienceScore << endl;
	cout << "�������\t" << computerScore << "\t\t\t\t�����ַ��" << &computerScore << endl;
}