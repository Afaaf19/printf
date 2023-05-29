#include "main.h"

/**
 * _printf - function that prints formatted output to standard output
 * @format: character string
 * @...: any other agrguments /depends on the number of given format specifiers
 * Return: nb_char / number of characters printed, or -1 if fail
 */

int _printf(const char *format, ...)
{
	int cnt = 0;
	int i = 0;
	va_list arg;

	va_start(arg, format);
	if (format == 0 || format[0] == '%')
		if (format[1] == 0)
			return (-1);
	if (format[0] == '%')
		if (format[1] == ' ')
			if (format[2] == 0)
				return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			print_char(format[++i], arg, &cnt);
		}
		else
		{
			write(1, &format[i], 1);
			cnt++;
		}
	i++;
	}
	va_end(arg);
	return (cnt);
}

