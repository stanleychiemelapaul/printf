#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct print - struct for printer functions
*
* Description: struct that stores pointers to a printer function
*/

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
