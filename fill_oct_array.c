#include "main.h"

/**
 * fill_oct_array - this sends the character c to stdout
 *
 * @bnr: array where binary is stored.
 * @oct: array where octal is stored.
 *
 * Return: binary array.
 */
char *fill_oct_array(char *bnr, char *oct)
{
	int op, k, m, ioct, size;

	oct[11] = '\0';
	for (k = 31, ioct = 10 ; k >= 0 ; k--, ioct--)
	{
		if (k > 1)
			size = 4;
		else
			size = 2;
		for (op = 0, m = 1 ; m <= size ; m *= 2, k--)
			op = ((bnr[k] - '0') * m) + op;
		k++;
		oct[ioct] = op + '0';
	}
	return (oct);
}

