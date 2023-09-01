#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout in the code
 * @c: The character that you need to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
