#include <unistd.h>

/**
 * main - Entry block
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
