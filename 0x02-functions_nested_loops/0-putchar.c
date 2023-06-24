#include "main.h"
#include <unistd.h>  /* Include the <unistd.h> header for the write function */

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 *
 * @c: The character to be written
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

