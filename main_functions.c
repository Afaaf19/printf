#include "main.h"
/**
 * add_percent - function that adds a percent sign to the standard output
 * @cnt: parameter / count the number of written chars
 * Return: void
 */
void add_percent(int *cnt)
{
	_putchar('%');
	(*cnt) += 1;
}
