#include "main.h"

/**
 * fill_short_oct_array - finds a short octal number
 *
 * @bnr: binary array.
 * @oct: octal array.
 *
 * Return: binary array.
 */
char *fill_short_oct_array(char *bnr, char *oct)
{
	int op, k, j, ioct, size;

	oct[6] = '\0';
	for (k = 15, ioct = 5 ; k >= 0 ; k--, ioct--)
	{
		if (k > 0)
			size = 4;
		else
			size = 1;
		for (op = 0, j = 1 ; j <= size ; j *= 2, k--)
			op = ((bnr[k] - '0') * j) + op;
		k++;
		oct[ioct] = op + '0';
	}
	return (oct);
}

