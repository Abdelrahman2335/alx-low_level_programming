#include "main.h"

/**
 * this is a function that prints sign of numbers
 * if n greater than zero it will return: 1
 * if n less than 1 it will return: -1
 * if the n equal 0 it will return: 0
 */


int print_sign(int n)
{
	if(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else 
	{
		_putchar('0');
		return (0);
	}
}
