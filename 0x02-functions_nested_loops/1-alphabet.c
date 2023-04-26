#include "main.h"

/**
 * print_alphabet - print a-z
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
