#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: this is number of bytes to be copied
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int z = 0;
	int i = n;

	for (; z < i; z++)
	{
		dest[z] = src[z];
		n--;
	}
	return (dest);
}
