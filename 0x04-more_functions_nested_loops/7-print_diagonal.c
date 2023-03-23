#include "main.h"

/**
 * print_diagonal - Draw a diagonal lines according parameter
 * @n: The number of times to print digonal lines
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (y = 0; y < n; y++)
	{
	for (y = 0; y < x; y++)
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
        }
}
