#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int z;
	int b;

	for (z = 0; z < 8; z++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[z][b]);
		_putchar('\n');
	}
}
