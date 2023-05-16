#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string and returns pointer to duplicate
 * @str: string to be duplicated
 *
 * Return: pointer to duplicate
 */

char *_strdup(char *str)
{
	char *a;
	int q, y;

	if (str == NULL)
		return (NULL);

	for (q = 0; str[q] != '\0'; q++)
		;

	a = malloc(q * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (y = 0; y < q; y++)
		a[y] = str[y];
	a[y] = '\0';

	return (a);
}
