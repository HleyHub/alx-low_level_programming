#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords for the program
 * 
 * Return: 0
 */
int main(void)
{
	int pwd[100];
	int ind, sum, n;

	sum = 0;

	srand(time(NULL));

	for (ind = 0; ind <= 99; ind++)
	{
		pwd[ind] = rand() % 78;
		sum += (pwd[ind] + 48);
		putchar(pwd[ind] + 48);
		if ((2772 - sum) - 48 < 78)
		{
			n = 2772 - sum - 48;
			sum += n;
			putchar(n + 48);
			break;
		}
	}

	return (0);
}
