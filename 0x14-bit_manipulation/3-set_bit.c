#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets a bit at a given index to 1
 * @n: parameter
 * @index: index of the bit to set to 1
 *
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
