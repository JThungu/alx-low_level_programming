#include <stdio.h>
/**
 * main - Entry point
 * Description:'alphabets in reverse'
 * Return: Always 0
 */
int main(void)
{
	char k = 122;

	for (k = 'z' ; k >= 'a' ; k--)
		putchar(k);
	putchar('\n');
	return (0);
}
