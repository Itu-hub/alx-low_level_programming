#include "main.h"
/**
 * _isdigit - check for a digit from 0 - 9
 * @c: integar to be checked
 *
 * Return: 1 if c is a number. 0 if it is not a number.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
