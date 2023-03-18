#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints combination of single digits'
 * Return: Always 0
 */
int main(void)
{
	int u;

	for (u = 48; u <= 57; u++)
	{
		putchar(u);
		putchar(',');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
