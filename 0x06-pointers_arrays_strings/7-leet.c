#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int A, B, C;

	C = 0;

	for (A = 0; str[A] != '\0'; A++)
		C++;

	B = (C / 2);

	if ((C % 2) == 1)
		B = ((C + 1) / 2);

	for (A = B; str[A] != '\0'; A++)
		_putchar(str[A]);
	_putchar('\n');
}
