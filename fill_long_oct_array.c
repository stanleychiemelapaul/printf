#include "main.h"

/**
 * fill_long_oct_array - finds a long octal number
 *
 * @bnr: array where binary is stored
 * @oct: array where octal is stored.
 *
 * Return: binary array.
 */
char *fill_long_oct_array(char *bnr, char *oct)
{
	int op, h, m, ioct, size;

	oct[22] = '\0';
	for (h = 63, ioct = 21 ; h >= 0 ; h--, ioct--)
	{
		if (h > 0)
			size = 4;
		else
			size = 1;
		for (op = 0, m = 1; m <= size ; m *= 2, h--)
			op = ((bnr[h] - '0') * m) + op;
		h++;
		oct[ioct] = op + '0';
	}
	return (oct);
}

