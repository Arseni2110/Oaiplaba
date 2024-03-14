#include <stdio.h>
#include <string.h>
#include "Header.h"

struct bilet
{
	char pora_goda[20];
	int kol_vo;
	int stoimost;
	int pribil;
	char nazv_piesi[20];
};
static bilet data[20], temp[20];
int kol_biletov = 0;
extern void enter()
{
	register int a;
	printf("������� ���� ���� �����: ");
	scanf_s("%d", &kol_biletov);
	for (a = 0; a < kol_biletov; a++)
	{
		printf("\n������� �������� �����: ");
		getchar();
		gets_s(data[a].nazv_piesi, 20);
		printf("������� ���������� ��������� �������: ");
		scanf_s("%d",  &data[a].kol_vo);
		printf("������� ��������� ������ ������: ");
		scanf_s("%d", &data[a].stoimost);
		printf("������� ���� ����, ����� ������ �����(�): ");
		scanf_s("%s", data[a].pora_goda, 20);
		data[a].pribil = data[a].kol_vo * data[a].stoimost;
	}
	printf("\n");
}
extern void print()
{
	register int a;
	printf("\n");
	if (kol_biletov == 0)
	{
		printf("������� ����� ������ ����������. \n");
	}
	else
	{
		printf("#	����. �����    ���-��    ���� ������    ���� ����    �������'\n");
		printf("***********************************************************************\n");
		for (a = 0; a < kol_biletov; a++)
		{
			printf("%19s %9d %14d %12s %10d", data[a].nazv_piesi, data[a].kol_vo, data[a].stoimost, data[a].pora_goda, data[a].pribil);
			printf("\n");
		}
	}
	printf("\n");
}
extern int read()
{
	register int a;
	printf("\n");
	if (kol_biletov == 0)
	{
		printf("������� ����� ������ ����������.\n\n");
		return 0;
	}
	printf("������� �������� ����� ����� ��������� ����������.\n");
	char choice[20];
	getchar();
	gets_s(choice,20);
	for (a = 0; a < kol_biletov; a++)
	{
		if (!strcmp(choice, data[a].nazv_piesi))
		{
			printf("#	����. �����    ���-��    ���� ������    ���� ����    �������'\n");
			printf("***********************************************************************\n");
			printf("%19s %9d %14d %12s %10d", data[a].nazv_piesi, data[a].kol_vo, data[a].stoimost, data[a].pora_goda, data[a].pribil);
			printf("\n\n");
			return 0;
		}
	}
	printf("����� ����� ���!\n");
}

extern void sort_pribil()
{

	register int a, b;
	if (kol_biletov == 0)
	{
		printf("\n������� ����� ������ ����������. \n");
	}
	else
	{
		printf("������ �������");
		print();
		for (a = 0; a < kol_biletov - 1; a++)
		{
			for (b = a + 1; b < kol_biletov; b++)
			{
				if (data[a].pribil < data[b].pribil)
				{
					temp[a] = data[a];
					data[a] = data[b];
					data[b] = temp[a];
				}
			}
		}
		printf("����� �������");
		print();
		printf("***Complited***\n");
	}
	printf("\n");
}

