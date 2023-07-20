#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @format: string of flags
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, print_seperator;
	char *str;
	char *separator = ", ";

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				print_seperator = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				print_seperator = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				print_seperator = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				print_seperator = 1;
				break;
			default:
				print_seperator = 0;
				break;
		}
		if (format[i + 1] != '\0' && print_seperator)
			printf("%s", separator);
		i++;
	}
	putchar('\n');
	va_end(args);
}
