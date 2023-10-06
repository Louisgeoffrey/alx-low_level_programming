#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The given number
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	int i;
	unsigned long int bits;

	for (i = 63; i >= 0; i--)
	{
		bits = n >> i;

		if (bits & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
