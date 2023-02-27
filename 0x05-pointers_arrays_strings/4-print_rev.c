#include "main.h"

/**
* print_rev - printing a string in reverse, followed by a new line
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}

	while (count)
	{
		s--;
		_putchar(*S);
		count--;
	}
	_putchar('\n');
}
