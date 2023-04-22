#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		putchar(i);
		putchar(j);
		if (j == '9' && i == '9')
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	if (j >= '9')
	{
		j = '0';
	}
	i++;
	return (0);
}
