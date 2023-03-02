#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: string
 */

char *leet(char *s)
{
int i = 0;
int j;
char a[][2] = {{'a', '4'}, {'A', '4'},
	{'e', '3'}, {'E', '3'}, {'o', '0'},
	{'O', '0'}, {'t', '7'}, {'T', '7'},
	{'l', '1'}, {'L', '1'}};

while (s[i] != '\n')
{
for (j = 0; j < 10; j++)
{
if (a[j][0] == s[i])
	s[i] = a[j][1];
}
i++;
}
return (s);
}

