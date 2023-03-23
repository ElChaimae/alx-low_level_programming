#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string
 * @n: nulber of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *s;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(list, char *);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (separator)
			printf("%s", separator);
	}
	s = va_arg(list, char *);
	printf("%s\n", s);

	va_end(list);
}
