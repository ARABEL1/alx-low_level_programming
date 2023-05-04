#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int f, q;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (f = 0; s[f] != '\0'; f++)
	{
		for (q = 0; x[q] != '\0'; q++)
		{
			if (s[f] == x[q])
			{
				s[f] = y[q];
				break;
			}
		}
	}

	return (s);
}
