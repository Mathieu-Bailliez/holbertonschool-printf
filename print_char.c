#include "main.h"

/**
 * print_char - prints a character
 * @list: argument list
 *
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	return (_putchar(c));
}
