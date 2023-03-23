#include "main.h"

/**
 * _isdigit function that checks the digits
 * @x: The number to be checked
 * Return: 1 for a character that will be 0 or 1 for any else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
