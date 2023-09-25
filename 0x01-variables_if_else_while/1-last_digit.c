#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than 5, is zero and is not less than 6 and not 0.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int n, last_digit_of;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	last_digit_of = n % 10; /*gets last digit*/

	if (last_digit_of > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit_of);
	else if (last_digit_of == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_digit_of);
	else if (last_digit_of < 6 && last_digit_of != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit_of);

	return (0);
}
