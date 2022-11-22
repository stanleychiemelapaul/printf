#include "main.h"

/**
 * print_str - sends the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: 1 on Success
 */
int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int k;
	char new[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (k = 0 ; new[k] ; k++)
			ibuf = handl_buf(buf, new[k], ibuf);
		return (6);
	}
	for (k = 0 ; str[k] ; k++)
		ibuf = handl_buf(buf, str[k], ibuf);
	return (k);
}

