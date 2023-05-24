#include "function_pointers.h"
/**
 * op_add - A function that returns the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - A function that returns the substraction of two numbers
 * @a: first number
 * @b: second number
 * Return: The substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - A function that returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - A function that returns the division of two numbers
 * @a: first number
 * @b: second number
 * Return: The division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - A function that returns the remainder of the
 * division of two numbers
 * @a: first number
 * @b: second number
 * Return: The modulo of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
