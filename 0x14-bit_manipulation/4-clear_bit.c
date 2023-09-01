#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to the number to set
 * @index: index point of the bit to set
 *
 * Return: 1 (success) or -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (-(1UL << index) & *n);
	return (1);
}
