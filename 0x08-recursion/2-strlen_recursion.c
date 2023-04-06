#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int itsLong = 0;

	if (*s)
	{
		itsLong++;
		itsLong += _strlen_recursion(s + 1);
	}
	return (itsLong);
}
