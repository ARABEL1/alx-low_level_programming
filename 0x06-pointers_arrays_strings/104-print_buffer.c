#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 *
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int q, o, p;

	if (size <= 0)
		printf("\n");
	else
	{
		for (q = 0; q < size; q += 10)
		{
			printf("%.8x:", q);
			for (o = q; o < q + 10; o++)
			{
				if (o % 2 == 0)
					printf(" ");
				if (o < size)
					printf("%.2x", *(b + o));
				else
					printf("  ");
			}
			printf(" ");
			for (p = q; p < q + 10; p++)
			{
				if (p >= size)
					break;
				if (*(b + p) < 32 || *(b + p) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + p));
			}
			printf("\n");
		}
	}
}
