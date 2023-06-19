#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @k: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int k)
{
	if (k >= '0' && k <= '9')
		return (1);
	else
		return (0);
}
