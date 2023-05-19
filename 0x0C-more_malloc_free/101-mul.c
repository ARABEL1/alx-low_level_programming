#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int x, b;

	x = b = 0;
	while (x < l)
	{
		if (str[x] != '0')
			b = 1;
		if (b || x == l - 1)
			putchar(str[x]);
		x++;
	}

	putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int q, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (q = num_index, k = dest_index; q >= 0; q--, k--)
	{
		mul = (n - '0') * (num[q] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int q, j;

	for (q = 1; q < 3; q++)
	{
		for (j = 0; av[q][j]; j++)
		{
			if (av[q][j] < '0' || av[q][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: sting to initialize
 * @l: length of strinf
 *
 * Return: void
 */
void init(char *str, int l)
{
	int Q;

	for (Q = 0; Q < l; Q++)
		str[Q] = '0';
	str[Q] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, xy, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (xy = 0; e[xy]; xy++)
			putchar(e[xy]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (xy = 0; e[xy]; xy++)
			putchar(e[xy]);
		exit(98);
	}
	init(a, ln - 1);
	for (xy = l2 - 1, i = 0; xy >= 0; xy--, i++)
	{
		t = mul(argv[2][xy], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (xy = 0; e[xy]; xy++)
				putchar(e[xy]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
