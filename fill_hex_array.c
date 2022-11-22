#include "main.h"

/**
 * fill_hex_array - sends the character c to stdout
 *
 * @bnr: array where is stored the binary.
 * @hex: array where is stored the hexadecimal.
 * @isupp: int that determines if the hex array is
 * in uppercase or lowercase letter.
 * @limit: hex size
 * Return: binary array.
 */
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit)
{
	int k, i, j, m;

	hex[limit] = '\0';
	if (isupp)
		m = 55;
	else
		m = 87;
	for (i = (limit * 4) - 1 ; i >= 0 ; i--)
	{
		for (k = 0, j = 1 ; j <= 8 ; j *= 2, i--)
			k = ((bnr[i] - '0') * j) + k;
		i++;
		if (k < 10)
			hex[i / 4] = k + 48;
		else
			hex[i / 4] = k + m;
	}
	return (hex);
}

