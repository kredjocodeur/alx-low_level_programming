#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'e' && lc != 'q') {
            		putchar(lc);
        	}
        	lc++;
	}
	putchar('\n');

	return (0);
}
