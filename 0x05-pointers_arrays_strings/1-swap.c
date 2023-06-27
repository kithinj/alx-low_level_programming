#include "main.h"
/**
 * swap_int - get to swap the value of two integers
 * @z: integer to swap
 * @x: integer to swap
 */
void swap_int(int *z, int *x)
{
	int m;

	m = *z;
	*z = *x;
	*x = m;
}
