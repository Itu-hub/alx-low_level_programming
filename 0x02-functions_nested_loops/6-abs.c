#include "main.h"
/**
 * _abs - Computes the absolute value 
 * of an integar.
 *
 * @i: input number as an integar.
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
