#include "main.h"

/**
 * _isupper - uppercase letters
 * @m: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int m)
{
	if (m >= 'A' && m <= 'Z')
		return (1);
	else
		return (0);
}
