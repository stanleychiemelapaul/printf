#include "main.h"

/**
 * fill_binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_in: input number
 * @isneg: if input number is negative
 * @limit: binary size
 * Return: number of char(s) printed.
 */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
	int count;

	for (count = 0 ; count < limit ; count++)
		binary[count] = '0';
	binary[limit] = '\0';
	for (count = limit - 1 ; int_in > 1 ; count--)
	{
		if (int_in == 2)
			binary[count] = '0';
		else
			binary[count] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		binary[count] = '1';
	if (isneg)
	{
		for (count = 0 ; binary[count] ; count++)
			if (binary[count] == '0')
			{
				binary[count] = '1';
			}
			else
			{
				binary[count] = '0';
			}
	}
	return (binary);
}

