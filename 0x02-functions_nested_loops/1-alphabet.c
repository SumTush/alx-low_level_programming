#include "main.h"

/**
 * print_alphabet - make the alphabet
 * Return: Always return 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
