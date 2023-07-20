#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints strings, followed by a new line.
 *
 * @format: string of print_seperators
 */

void print_all(const char * const format, ...)
{
	int i;
	int print_seperator;
	char *str;
	va_list args;

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
				printf("%i", va_arg(args, int));
				print_seperator = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				print_seperator = 1;
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				print_seperator = 1;
				break;
			default:
				print_seperator = 0;
				break;
		}
		if (format[i + 1] != '\0' && print_seperator)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
