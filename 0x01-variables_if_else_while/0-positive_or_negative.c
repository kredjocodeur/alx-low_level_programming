#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main: Entry point
 *
 * Description: print the value of n status(zero, positive, negative)
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
