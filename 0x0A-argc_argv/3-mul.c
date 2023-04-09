#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 *
 * This function takes two command-line arguments, converts them to integers,
 * multiplies them together, and prints the result to stdout.
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the command-line arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
