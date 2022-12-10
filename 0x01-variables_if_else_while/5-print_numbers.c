#include <stdio.h>
/**
 *main - print from 0 - 9
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
		while (n < 10)
		{
			printf("%i", n);
			n++;
		}
	putchar('\n');

	return (0);
}

