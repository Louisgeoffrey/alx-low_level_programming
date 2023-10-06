#include "main.h"

/**
 * get_endianness - A function that checks the endianness of a machine
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int input = 1;
	char *byte = (char *)&input;

	return (*byte);
}
