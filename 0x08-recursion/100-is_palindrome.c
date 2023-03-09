#include "main.h"

int len(char *s);
int isP(char *s, char *e);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int l = len(s);

	return (isP(s, s + l - 1));
}

/**
 * len - calculates string length
 * @s: string
 *
 * Return: length
 */
int len(char *s)
{
	if (*s != '\0')
		return (len(s + 1) + 1);
	else
		return (0);
}

/**
 * isP - helping function
 * @s: start pointer
 * @e: end pointer
 *
 * Return: 1 if palindrome and 0 otherwise
 */
int isP(char *s, char *e)
{
	if (s >= e)
		return (1);
	else if (*s == *e)
		return (isP(s + 1, e - 1));
	else
		return (0);
}

