#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - is a function that prints numbers
 * @n: is the int input
 * @seperator: seperator input
 * Return: numbers entered as args to the function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (seperator != NULL && i < n - 1)
			printf("%s", seperator);
		i++;
	}
	va_end(args);
	printf("\n");
}
