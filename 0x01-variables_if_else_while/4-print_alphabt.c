#include <stdio.h>

/**
 * main - Entry block
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
}
	putchar('\n');
	return (0);
}
