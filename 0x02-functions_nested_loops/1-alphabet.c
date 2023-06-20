#include "main.h"

/**
 * main - entry point
 *
 * Description: print alphabets using _putchar
 *
 * Return : 0 Success
 */

int main(void)
{
	char x = 'a';
	
	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
	return (0);
}
