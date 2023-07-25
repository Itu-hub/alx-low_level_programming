#include "main.h"
/*
 * print_rev - print string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int tumi = 0;
	int o;

	while (*s != '\0')
	{
		tumi++;
		s++;
	}
	s--;
	for (o = tumi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
