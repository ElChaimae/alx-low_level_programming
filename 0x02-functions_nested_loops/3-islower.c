#include "main.h"

/**
  * _islower - This function checks for lowercase character.
  *
  * Return: 1 if c is lowercase
  * 0 otherwise
  */
int _islower(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
