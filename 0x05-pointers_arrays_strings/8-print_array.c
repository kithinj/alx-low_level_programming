#include "main.h"

/**
 * print_array - function which get to  print n elements of an array
 * @z: array name
 * @n: is the number of elements OF the array to be printed
 * Return: z and n inputs
 */
void print_array(int *z, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", z[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", z[n - 1]);
		}
			printf("\n");
}

