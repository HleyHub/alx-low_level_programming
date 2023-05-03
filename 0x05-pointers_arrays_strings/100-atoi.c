#include "main.h"
/**
 * _atoi - Function that convert a string to an integer
 * @s: String to be converted
 * Return: 0
 */
int _atoi(char *s)
{
	int ind, a, n, lgth, b, dgit;

	ind = 0;
	a = 0;
	n = 0;
	lgth = 0;
	b = 0;
	dgit = 0;

	while (s[lgth] != '\0')
		lgth++;

	while (ind < lgth && b == 0)
	{
		if (s[ind] == 45)
			++a;

		if (s[ind] >= 48 && s[ind] <= 57)
		{
			dgit = s[ind] - 48;
			if (a % 2)
				dgit = -dgit;
			n = n * 10 + dgit;
			b = 1;
			if (s[ind + 1] < 48 || s[ind + 1] > 57)
				break;
			b = 0;
		}
		ind++;
	}

	if (b == 0)
		return (0);

	return (n);
}
