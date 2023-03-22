#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @v: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int v)
{
	int y;

	y = v % 10;
	if (v < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
