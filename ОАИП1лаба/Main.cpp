//Разработать программу оценки продаж театральных билетов от времени года.
// Данные о продажах хранить в виде массива структур.Итоговая информация должна выводиться на экран в виде таблицы, 
// отсортированной по величине прибыли.

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
		printf("1. Ввести информацию.\n");
		printf("2. Прочитать информацию.\n");
		printf("3. Прочитать определенную информацию.\n");
		printf("4. Сортировать информацию по прибыли.\n");
		printf("5. Выйти из программы.\n\n");
		printf("Ввести свой выбор: ");
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
