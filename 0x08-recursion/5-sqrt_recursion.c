#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: value to be calculated
 * Return: result of square root
 */
int _sqrt_recursion(int n);
int find_sqrt(int num, int root);

/**
 * _find_sqrt - finds he square root of nutural number
 * @num: value used
 * @root: value used
 * Return: result
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (find_sqrt(num, root + 1));
}


int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
