#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to the number to clear
 * @index: index point of the bit to clear
 *
 * Return: 1 for success or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
