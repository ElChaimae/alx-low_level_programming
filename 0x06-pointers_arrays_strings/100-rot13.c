#include "main.h"

/**
 * rot13 - it encodes a string using rot13.
 * @s: string to be encoded
 *
 * Return: string.
 */
char *rot13(char *s)
{
int i = 0, j = 0;
char a[][2] = {{'a', 'n'}, {'b', 'o'}, {'c', 'p'},
	{'d', 'q'}, {'e', 'r'}, {'f', 's'}, {'g', 't'},
	{'h', 'u'}, {'i', 'v'}, {'j', 'w'}, {'k', 'x'},
	{'l', 'y'}, {'m', 'z'}, {'z', 'm'}, {'y', 'l'},
	{'x', 'k'}, {'w', 'j'}, {'v', 'i'}, {'u', 'h'},
	{'t', 'g'}, {'s', 'f'}, {'r', 'e'}, {'q', 'd'},
	{'p', 'c'}, {'o', 'b'}, {'n', 'a'}, {'A', 'N'},
	{'B', 'O'}, {'C', 'P'}, {'D', 'Q'}, {'E', 'R'},
	{'F', 'S'}, {'G', 'T'}, {'H', 'U'}, {'I', 'V'},
	{'J', 'W'}, {'K', 'X'}, {'L', 'Y'}, {'M', 'Z'},
	{'Z', 'M'}, {'Y', 'L'}, {'X', 'K'}, {'W', 'J'},
	{'V', 'I'}, {'U', 'H'}, {'T', 'G'}, {'S', 'F'},
	{'R', 'E'}, {'Q', 'D'}, {'P', 'C'}, {'O', 'B'},
	{'N', 'A'} };

while (s[i] != '\0')
{
	for (j = 0; j < 52; j++)
	{
		if (s[i] == a[j][0])
		{
			s[i] = a[j][1];
			break;
		}
	}
	i++;
}
return (s);
}

