#include "main.h"
/**
 * print_chessboard - Function that prints the chessboard
 * @a: Array
 */
void print_chessboard(char (*a)[8])
{
	int ind1, ind2;

	for (ind1 = 0; ind1 <= 7; ind1++)
	{
		for (ind2 = 0; ind2 <= 7; ind2++)
		{
			_putchar(a[ind1][ind2]);
		}
		_putchar('\n');
	}
}
