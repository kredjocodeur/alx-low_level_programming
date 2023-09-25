#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lc = 'a';
	char UC = 'A';

	/*prints a - z*/
	while (lc <= 'z')
	{
		putchar(lc);
		++lc;
	}

	/*print A - Z*/
	while (UC <= 'Z')
	{
		putchar(UC);
		++UC;
	}
	putchar('\n');

	return (0);
}
