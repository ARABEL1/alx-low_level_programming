#include "main.h"
/**
 * _strcat - concatenates two strings,
 *
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 *
 */
char *_strcat(char *dest, char *src)
{
	int A = 0, B = 0;

	while (*(dest + A) != '\0')
	{
		A++;
	}

	while (B >= 0)
	{
		*(dest + A) = *(src + B);
		if (*(src + B) == '\0')
			break;
		A++;
		B++;
	}
	return (dest);
}
