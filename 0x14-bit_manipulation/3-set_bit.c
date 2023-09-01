#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the number to set
 * @index: index point of the bit
 *
 * Return: 1 (success) or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
