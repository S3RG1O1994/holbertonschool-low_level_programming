#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - print strings.
 * @n: number of arguments.
 * @separator: is colon.
 * Return: result plus strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list data;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(data, n);

	for (i = 0; i < n; i++)
	{
		if (data == NULL)
			printf("(nil)");

		printf("%s", va_arg(data, char*));

		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(data);
}
