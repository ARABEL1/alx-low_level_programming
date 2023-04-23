#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *main - prints the alphabet in lowercase
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j != 'q' && j != 'e')
			putchar(j);
	}
	putchar('\n');
	return (0);
}
