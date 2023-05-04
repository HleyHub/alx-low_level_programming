#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int ind1 = 0;
	int ind2 = 0;
	char val;

	while (*(n + ind1) != '\0')
	{
		ind1++;
	}
	ind1--;

	for (ind2 = 0; ind2 < ind1; ind2++, ind1--)
	{
		val = *(n + ind2);
		*(n + ind2) = *(n + ind1);
		*(n + ind1) = val;
	}
}
/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int end = 0, ind1 = 0, ind2 = 0, dg = 0;
	int val1 = 0, val2 = 0, val_tot = 0;

	while (*(n1 + ind1) != '\0')
		ind1++;
	while (*(n2 + ind2) != '\0')
		ind2++;
	ind1--;
	ind2--;
	if (ind2 >= size_r || ind1 >= size_r)
		return (0);
	while (ind2 >= 0 || ind1 >= 0 || end == 1)
	{
		if (ind1 < 0)
			val1 = 0;
		else
			val1 = *(n1 + ind1) - 48;
		if (ind2 < 0)
			val2 = 0;
		else
			val2 = *(n2 + ind2) - 48;
		val_tot = val1 + val2 + end;
		if (val_tot >= 10)
			end = 1;
		else
			end = 0;
		if (dg >= (size_r - 1))
			return (0);
		*(r + dg) = (val_tot % 10) + 48;
		dg++;
		ind2--;
		ind1--;
	}
	if (dg == size_r)
		return (0);
	*(r + dg) = '\0';
	rev_string(r);
	return (r);
}
