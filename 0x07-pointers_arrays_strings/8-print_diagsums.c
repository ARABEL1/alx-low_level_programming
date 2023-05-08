#include "main.h"
/**
 * print_chessboard - print a chessboard.
 * @a: source matrix
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int n, y;

	for (n = 0; n <= 7; n++)
	{
		for (y = 0; y <= 7; y++)
		{
			_putchar(a[n][y]);
		}
		_putchar('\n');
	}
}
