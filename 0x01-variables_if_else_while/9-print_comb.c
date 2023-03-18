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
		putchar(u + '0');
		if (u != 9)
		{
			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
