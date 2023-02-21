#include "main.h"

/**
  * isalpha - This function checks for alphabetuc character.
  * @c: character to be checked
  *
  * Return: 1 if c is a letter
  * 0 otherwise
  */
int isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
