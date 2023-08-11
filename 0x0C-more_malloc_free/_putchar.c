#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print is the one that i ahve just stated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
