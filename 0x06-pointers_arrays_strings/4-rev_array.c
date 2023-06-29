#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @z: array
 * @x: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *z, int x)
{
	int i;
	int t;

	for (i = 0; i < x--; i++)
	{
		t = z[i];
		z[i] = z[x];
		z[x] = t;
	}
}

