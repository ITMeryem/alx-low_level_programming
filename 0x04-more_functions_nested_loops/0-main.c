#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'A';
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(_isupper(c) + '0');
	_putchar('\n');

	c = 'a';
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(_isupper(c) + '0');
	_putchar('\n');

	return (0);
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
