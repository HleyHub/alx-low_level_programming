/**
 * add - A function that adds two integers and returns the result
 * @i1: The first interger to be returned
 * @i2: The second interger to be returned
 * Return: integer value
 */
int add(int i1, int i2)
{
	return (i1 + i2);
}

/**
 * mul - A function that multiplies two integers
 * @i1: The first interger to be returned
 * @i2: The second interger to be returned
 * Return: 0
 */
int mul(int i1, int i2)
{
	return (i1 * i2);
}

/**
 * sub - A function that subtracts two integers
 * @i1: The first interger to be returned
 * @i2: The second interger to be returned 
 * Return: 0
 */
int sub(int i1, int i2)
{
	return (i1 - i2);

}

/**
 * div - A function that divides of two integers
 * @i1: The first interger to be returned
 * @i2: The second interger to be returned
 * Return: 0
 */
int div(int i1, int i2)
{
	if (i2 != 0)
	return (i1 / i2);
	else
		return (-1);
}

/**
 * mod - A function that finds the modulus of two integers
 * @i1: The first interger to be returned
 * @i2: The second interger to be returned
 * Return: 0
 */
int mod(int i1, int i2)
{
	if (i2 != 0)
	return (i1 % i2);
	else
		return (-1);
}
