#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Description: prints all single digit numbers of base 10 using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
