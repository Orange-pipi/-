/*************************************************
** ���� : һ��ʮ��
** ���� : tsingke
** ���� : 2020-10-27 / 21:17
** ��Ȩ : tsingke@sdnu.edu.cn
** ��������(����Ȩ) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

/*----------------------------------*
		 Class Definition
*-----------------------------------*/



/*----------------------------------*
		Global Definition
*-----------------------------------*/




/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{

	srand(time(0));
	int i, k = 0, m, n, x;

	char ch;
	cout << "��һ������_�أ�" << endl;

	cin >> x;
	while (k <= x - 1)
	{
		k++;
		cout << endl << "��" << k << "�أ�" << "���һ��" << k << "λ����" << endl << endl;


		m = rand() % 9 + 1;

		for (i = 1; i <= k - 1; i++)
			m = m * 10 + rand() % 10;
		while (1)

		{
			cin >> n;
			while (!cin)
			{
				cin.clear();
				cin >> n;

			}
			if (n == 0)

				cin >> n;

			if (n == m)

			{
				cout << "��ϲ���¶���" << endl;

				break;
			}
			else if (n > m)cout << "���´���" << endl;

			else cout << "����С��" << endl;
		}
		cout << endl;
	}
	cout << endl << endl << "��Ӯ�ˣ�" << endl;


	system("pause");

	return 0;
}