#include "main.h"

/**
 * clear_bit - it sets the value of a given bit to zero
 * @n: pointer to the number to change
 * @index: index of the bit to a clearer form
 *
 * Return: one for success, negative for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
