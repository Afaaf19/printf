#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @ch: char
 * Return: 1 if success
 */
int _putchar(char ch)
{
	return (write(1, &c, 1));
}
/**
 * print_char - handles character specifier
 * @ch: parameter 1
 * @arg: parameter 2
 * @count: parameter 3
 */
void print_char(char ch, va_list arg, int *count)
{
	/*if character is char*/
	if (ch == 'c')
	{
		char chr = va_arg(arg, int);

		write(1, &chr, 1);
		(*count)++;
	}
	/*if character is string*/
	else if (ch == 's')
	{
		char *str = va_arg(arg, char *);

		if (str == NULL)
			str = "(null)";
		write(1, str, strlen(s));
		(*count) += strlrn(s);
	}
	/*if character is an integer*/
	/*if it was %*/
	else if (ch == '%')
	{
		write(1, "%", 1);
		(*count)++;
	}
	else
	{
		write(1, "%", 1);
		write(1, &c, 1);
		(*count) += 2;
	}
}
i
