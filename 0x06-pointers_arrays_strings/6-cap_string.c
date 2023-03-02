#include "main.h"
#include <stdio.h>
/**
 * cap_string - it capitalizes all words of a string.
 * @s: string
 *
 * Return: string.
 */

char *cap_string(char *s)
{
char sep[] = {' ', '\t', '\n', ',',
	';', '.', '!', '?', '"', '(', ')', '{', '}'};
int i = 0, j = 0;

if (s[0] >= 97 && s[0] <= 122)
	s[0] = s[0] - 32;

while (s[i] != '\0')
{
	for (j = 0; j < 13; j++)
	{
		if (s[i] == sep[j])
		{
			if ((s[i + 1] >= 97) && (s[i + 1] <= 122))
				s[i + 1] = s[i + 1] - 32;
		}
	}
	i++;
}
return (s);
}
