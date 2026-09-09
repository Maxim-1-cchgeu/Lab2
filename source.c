#include<stdio.h>
#include<locale.h>

void printTime()
{
	int N, K, S;
	N = 21;
	K = 46;
	S = 24;

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", (((N - 8 + 24) % 24)) * 3600 + K * 60 + S);
	printf("Текущий час = %1.2f суток и текущая минута = %1.2f часа\n", N / 24.0, K / 60.0);
}

void divide()
{
	int n, L;
	n = 2;
	L = 331;
	printf("Дано:\n"
		   "\t%4d\n"
		   "\t%4d\n"
		   "\t_________\n"
		   "Ответ:\n"
		   "\t%+08.3f\n",
		   n, L, 1.0 * n / L);
}

int main() 
{
	setlocale(LC_CTYPE, "RUS.UTF-8");
	printf("%2d\n%4d\n%6d\n%8d\n ", 1, 2, 3, 4);
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("Произведение чисел %d и %d равно %d\n ", 2000, 4, 2000 * 4);
	printf("%e разделить %e равно %e\n ", 5., 2000000., 5. / 2000000);
	printf("\n");
	printTime();
	printf("\n");
	divide();
}
