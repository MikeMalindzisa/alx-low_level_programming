#include "variadic_functions.h"
/**
 * print_all - Start here
 * Desc - Write a function that prints anything.
 *
 * @format: args type
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *str;
	int index;

	index = 0;
	va_start(list, format);
	while (format != NULL && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(list, int));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[index] == 'c' || format[index] == 'i' || format[index] == 'f' ||
		format[index] == 's') && format[(index + 1)] != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(list);
}

