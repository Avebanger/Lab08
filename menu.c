#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	printf("Введите желаемый номер задания для запуска: ");
	int k;
	scanf("%d", &k);
	switch (k)
	{
	case(1):
		ramochka();
	}
}