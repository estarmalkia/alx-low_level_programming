#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: str to be printed btwn nums
 * @n: num of ints passed as args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);				/* start iterating args */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));	/* va_arg -> additional arg */
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
