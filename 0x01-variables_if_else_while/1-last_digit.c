#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a number is positive or negative
 *
 * Return: 0
 */
int main(void)
{
        int n;
	char ld;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n % 10 > 5)
                printf("Last digit of %d is %s and is greater 5\n");
        else if (n%10 == 0)
                printf("Last digit of %d is %s and is 0\n");
        else
                printf("Last digit of %d is %s and is less than 6 and not 0\n");
        return (0);
}
