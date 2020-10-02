/*************************************************

** Դ�ļ�   : score.c

** ����˵�� : Function Definitions

** �����汾 : v1.0

/**************************************************/



/*----------------ͷ�ļ�--------------*/

#define  _CRT_SECURE_NO_WARNINGS

#include <math.h>

#include <stdlib.h>

#include <stdio.h>

#include "SCORE.h"



/*----------------��������-------------*/



//1.1�ֶ�����ѧ����������

void readData(SS stu[], int N)

{



	printf("�밴�����¸�ʽ����ѧ����Ϣ��ѧ��,����,ƽʱ�ɼ�,��ĩ�ɼ�\n");



	for (int i = 0; i < N; i++)

	{

		printf("��%d��ѧ��:", i + 1);

		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);

		printf("\n");

	}



	printf("------�ɼ�¼�����!--------\n");



}



//1.2���ļ����ȡѧ����������

SS* readDataFromFile(int *N)

{



	printf("\n\n------��һ��: ���ļ���ȡѧ���ĳɼ���Ϣ--------\n\n");



	SS *stu;// �����¿ռ�,��ȡ�ļ��е�ÿ��ѧ����Ϣ



	FILE *fp = NULL;

	int count = 0;

	int index = 0;



	fp = fopen("data.txt", "r");



	//1.��ȡѧ����Ŀ

	if (fp != NULL)

	{

		fscanf(fp, "%d", &count);

		*N = count;

	}

	else

	{

		printf("failed to open the info file\n");

		getchar();

	}



	printf("ѧ����ĿΪ:%d\n", count);





	//2.������ѧ������洢�ռ�

	stu = (SS*)malloc(count * sizeof(SS));





	//3.��ȡÿ��ѧ������Ϣ

	while ((!feof(fp)))

	{

		for (index = 0; index < count; index++)
		{

			fscanf(fp,"%s %s %f %f", &stu[index].number, &stu[index].name, &stu[index].dailyScore, &stu[index].finalScore);
			printf("%-10s %-10s %10f %10f\n", stu[index].number, stu[index].name, stu[index].dailyScore, stu[index].finalScore);

		}

	}



	getchar();



	fclose(fp);



	return stu;

}



//2.����N��ѧ�����Ե������ɼ�

void calcuScore(SS stu[], int N)

{

	printf("\n\n------�ڶ���: ����ÿ��ѧ���������ɼ�--------\n\n");
	


	for (int i = 0; i < N; i++)
	{

		//ѧ���ܳɼ� = 0.2*ƽʱ�ɼ� + 0.8*��ĩ�ɼ�
		stu[i].generalScore = stu[i].dailyScore * 0.2 + stu[i].finalScore * 0.8;

		//���ѧ����ѧ�š��������ܳɼ�
		printf("%-10s %-10s %10f\n", stu[i].number, stu[i].name, stu[i].generalScore);

	}



	getchar();

}





//3.���������ɼ�����

int cmpBigtoSmall(const void *a, const void *b)

{



	SS *aa = (SS *)(a);

	SS *bb = (SS *)(b);







	if ((*aa).generalScore < (*bb).generalScore)  return 1;



	else if ((*aa).generalScore > (*bb).generalScore)  return -1;



	else

		return 0;



}



void sortScore(SS stu[], int N)

{



	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);



}



//4.����һ���ĸ�ʽ���N��ѧ������Ϣ

void printOut(SS stu[], int N)

{



	printf("\n------������: �����ܳɼ����ѧ��������Ϣ!------\n\n");


	for (int i = 0; i < N; i++)
	{

		//���ѧ��������Ϣ
		printf("��%3d���� %-10s %-10s %10f %10f %10f\n", i+1, stu[i].number, stu[i].name, stu[i].dailyScore, stu[i].finalScore, stu[i].generalScore);

	}





	getchar();



}