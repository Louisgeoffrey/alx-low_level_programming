#include "main.h"

/**
 * _isupper - This checks if is uppercase letters
 * @c: Char to be checked
 *
 * Return: if uppercase return 1, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
