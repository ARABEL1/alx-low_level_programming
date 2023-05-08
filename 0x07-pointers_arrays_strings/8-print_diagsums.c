#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print additions of the two diagonals.
 * @a: source matrix
 * @size: size NxN of matrix
 *
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int k, h, sumdiagonal1 = 0, sumdiagonal2 = 0, step1, step2;

	for (k = 0; k <= (size - 1); k++)
	{
		step1 =  (size + 1) * k;
		sumdiagonal1 = sumdiagonal1 + *(a + step1);
	}

	for (h = 1; h <= size; h++)
	{
		step2 = (size - 1) * h;
		sumdiagonal2 = sumdiagonal2 + *(a + step2);
	}
	printf("%d, %d\n", sumdiagonal1, sumdiagonal2);
}
