#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int q = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				q++;
				break;
	
			}
			else if (accept[r + 1] == '\0')
				return (q);
		}
		s++;
	}
	return (q);
}
