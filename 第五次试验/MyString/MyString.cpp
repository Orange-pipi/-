/*************************************************
** Դ�ļ�   : MyString.cpp
** ����˵�� : ���� MyString�� �еĺ���
** ����ʱ�� : 2020-11-21/18:39
** ������ Orange-pipi
/**************************************************/

/*----------------ͷ�ļ�����--------------*/

#include "MyString.h"


/*----------------���к�������-------------*/

int Mystring::MyLink(char * str1, char * str2)
{
	char *p = str1;

	while (*p != '\0')
	{
		p++;
	}

	while (*str2 != '\0')
	{
		*p++ = *str2++;
	}

	*p = '\0';

	return 0;
}

int Mystring::MyLength(char * p)
{
	int i = 0;

	while (*p != 0)
	{
		i++; p++;
	}

	return i;
}
void Mystring::MyStrcump(char * str1, char * str2)
{
	int num1 = sizeof(str1);
	int num2 = sizeof(str2);

	if (num1 != num2)
	{
		cout << "�����ַ�����ͬ" << endl;
	}
	else
	{
		for (int i = 0; i < num1;)
		{
			if (str1[i] == str2[i])
			{
				i++;
				if (i == num1)
				{
					cout << "���ַ�����ͬ" << endl;
				}
				else
				{
					continue;
				}
			}
			else
			{
				cout << "�����ַ�����ͬ" << endl;
				break;
			}
		}
	}
}
int Mystring::MyReverse(char * str1)
{
	int num = sizeof(str1);
	char str2[10];

	for (int i = 0; i < num; i++)
	{
		str2[i] = str1[num - 1 - i];
	}

	cout << str2 << endl;//�����������ַ���

	return 0;

}