#include "main.h"
/**
 * swap_int - swaps the values of two integars
 * @a: integar to swap
 * @b: integar to swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
