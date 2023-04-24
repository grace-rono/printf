#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - produces formated output
 * @format: output
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list osarg;
	int sum = 0;
	int i;

	while (*format != '\0')


	va_start(osarg, format);
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
		{

			write(STDOUT_FILENO, "%", 1);
			sum++;
		}
		}
		else if (*format == 's')
		{
			char *string = va_arg(osarg, char*);

			i = 0;

			while (string[i] != '\0')
			{
				write(STDOUT_FILENO, &string[i], 1);
						i++;
						sum++;
			}
		}
			else if (*format == '%')
			{
			write(STDOUT_FILENO, "%", 1);
			sum++;
			}
			{
			format ++;
			}

			va_end(osarg);
	}

			return (sum);

}
