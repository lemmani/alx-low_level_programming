#include "main.h"

/**
 * set_bit - sets a bit at a given index to a number in the code
 * @n: pointer to the number to change in thie code
 * @index: index of the bit to set to one in the code
 *
 * Return: one for success, and negative for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
