#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

class Triangle
{
private:
	double a, b, c;//���������α߳�
	int flag;
	double l, s;

public:
	void testTriangle(double a, double b, double c);

	int checkTriangle()//�����������Ƿ����
	{
		if (a + b > c && a + c > b && b + c > a)
			return flag = 1;
		else
			return flag = 0;
	}

	double lengthTriangle()//�����ܳ�
	{
		checkTriangle();
		if (flag == 1)
		{

			l = a + b + c;
			return l;

		}
		else
			return 0;

	}

	double areaTriangle()//�������
	{
		checkTriangle();
		if (flag == 1)
		{

			double p = (a + b + c) / 2;
			s = sqrt(p*(p - a)*(p - b)*(p - c));
			return s;

		}

		else
			return 0;

	}

};




void Triangle::testTriangle(double p1, double p2, double p3)//��������
{

	this->a = p1;
	this->b = p2;
	this->c = p3;

}



int main()
{

	vector<int> count;//����һ��������ӳ��ȵ�����
	cout << "������һ��ı߳���" << endl;

	int number;
	while (1)//�ڼ�������߳�����
	{

		cin >> number;
		count.push_back(number);
		if (cin.get() == '\n')//��⵽�س�ʱ����
			break;

	}


	int len = count.size();//�������鳤��
	Triangle tri;//����һ�������ζ���


	vector<double> c;
	vector<double> s;
	//����ѭ������
	for (int i = 0; i < len; i++)
	{

		for (int j = i + 1; j < len; j++)
		{

			for (int k = j + 1; k < len; k++)
			{

				tri.testTriangle(count[i], count[j], count[k]);
				c.push_back(tri.lengthTriangle());
				s.push_back(tri.areaTriangle());

			}

		}

	}

	int c_len = c.size();
	int s_len = s.size();

	int cMax = 0;
	int sMax = 0;

	//��������ܳ�
	for (int i = 0; i < c_len; i++)
	{

		if (cMax < c[i])
			cMax = c[i];

	}
	cout <<"����ܳ�Ϊ�� "<< cMax << endl;

	//����������
	for (int i = 0; i < s_len; i++)
	{

		if (sMax < s[i])
			sMax = s[i];

	}
	cout <<"������Ϊ�� "<< sMax << endl;



	system("pause");
	return 0;

}