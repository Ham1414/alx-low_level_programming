#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add intigers
  * @a: first int
  * @b: second int
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - sub int
  * @a: first int
  * @b: second int
  *
  * Return: dif of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - product of two int
  * @a: first int
  * @b: second int
  *
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division of two int
  * @a: first int
  * @b: second int
  *
  * Return: division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - remainder of the division of a by b
  * @a: first int
  * @b: second int
  *
  * Return: division of a by b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
