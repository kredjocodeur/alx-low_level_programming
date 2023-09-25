#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main: print if the variable n is positive or negative
 *
 * Return: The function return always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*code*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
