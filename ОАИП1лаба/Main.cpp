//����������� ��������� ������ ������ ����������� ������� �� ������� ����.
// ������ � �������� ������� � ���� ������� ��������.�������� ���������� ������ ���������� �� ����� � ���� �������, 
// ��������������� �� �������� �������.

#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include "Header.h"

extern int kol_biletov;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	do {
		printf("1. ������ ����������.\n");
		printf("2. ��������� ����������.\n");
		printf("3. ��������� ������������ ����������.\n");
		printf("4. ����������� ���������� �� �������.\n");
		printf("5. ����� �� ���������.\n\n");
		printf("������ ���� �����: ");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1: enter();
			break;
		case 2: print();
			break;
		case 3: read();
			break;
		case 4: sort_pribil();
			break;
		case 5: return 0;
		}
	} while (choice != 5);
	return 0;
}
