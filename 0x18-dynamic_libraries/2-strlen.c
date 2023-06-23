#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: to be check
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
