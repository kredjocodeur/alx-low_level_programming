#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1,..., 9
 *
 * Return: Always 0 (Success)
*/

int main() {

    putchar('0');
    
    for (int i = 1; i < 10; i++) {
        putchar(',');
        putchar(' ');
        putchar(i + '0');
    }

    putchar('\n');

    return 0;
}

