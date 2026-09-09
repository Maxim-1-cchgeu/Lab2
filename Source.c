#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

void printTime()
{
	int N, K, S;
	time_t currentTime = time(NULL);
	struct tm* now = localtime(&currentTime);
	N = now->tm_hour;
	K = now->tm_min;
	S = now->tm_sec;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", (((N - 8 + 24) % 24)) * 3600 + K * 60 + S);
	printf("Текущий час = %1.2f суток и текущая минута = %1.2f часа\n", (float) N / 24, (float) K / 60);
}

void divide()
{
	int n, L;
	n = 2;
	L = 331;
	printf("Дано:\n"
		   "\t%4d\n"
		   "\t%4d\n"
		   "\t_______\n"
		   "Ответ:\n"
		   "\t%+3.3f\n",
		   n, L, (float) n / L);
}

void paperwalls()
{
	const int rollLength = 12;
	const int rollWidth = 1;
	int wallLength = 20;
	int wallHeight = 3;
	float rollPrice = 200;

	float totalPrice = ceil((float)(wallLength * wallHeight) / (rollLength * rollWidth)) * rollPrice;
	printf("Обои будут стоить: %10.2f руб.\n", totalPrice);
}

int main() 
{
	setlocale(LC_CTYPE, "RUS");
	printf("%2d\n%4d\n%6d\n%8d\n ", 1, 2, 3, 4);
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("Произведение чисел %d и %d равно %d\n ", 2000, 4, 2000 * 4);
	printf("%e разделить %e равно %e\n ", 5., 2000000., 5. / 2000000);
	printf("\n");
	printTime();
	printf("\n");
	divide();
	printf("\n");
	paperwalls();
}