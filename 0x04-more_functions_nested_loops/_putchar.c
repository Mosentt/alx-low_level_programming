#include "main.h"
#include <unistd.h>
/**
 * _putchar: write the character c to std out.
 * @c: is the character to be printed.
 * Return: 1
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
