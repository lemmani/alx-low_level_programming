#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function as the others
 * @name: string to add in the code
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
