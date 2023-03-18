#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints combination of single digits'
 * Return: Always 0
 */
int main(void)
{
	int u;

	for (u = 0; u <= 10; u++)
	{
		if (u == 9)
			putchar(u + '0' + '\n');
		else
		{
			putchar(u + '0');
			putchar(',');
			putchar (' ');
		}
	}
	return (0);
}
