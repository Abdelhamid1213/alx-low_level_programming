#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if ((i * j) < 10)
            {
                putchar('0' + (i * j));
            }
            else
            {
            	putchar('0' + (i * j / 10));
            	putchar('0' + (i * j % 10));
            }
            if (j < 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');
    }
}
