#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: a printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

