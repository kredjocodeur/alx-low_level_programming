#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet letters in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char chr = 'z';

	while (chr >= 'a')
	{
		putchar(chr);
		--chr;
	}
	putchar('\n');

	return (0);
}
