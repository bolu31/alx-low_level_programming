#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: thenumber of sign should be printed
 * Return: Always 1 if number is greater than 0
 * 0 of number is zero
 * -1 of number is less than zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
	_putchar ('-');
	return (-1);
	}

}
