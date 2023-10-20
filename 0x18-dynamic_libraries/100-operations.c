#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of a minus b.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of a minus b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of a minus b.
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - remaider after dividing  two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of a minus b.
 */
int mod(int a, int b)
{
	return (a % b);
}
