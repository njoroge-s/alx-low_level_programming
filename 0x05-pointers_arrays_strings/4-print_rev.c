#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the sting to be printed
 */
void print_rev(char *s)
{
	int k;

	while (s[k] != '\0')
	{
		k++;
	}
	k--;
	while (s[k] != '\0')
	{
		_putchar(s[k--]);
	}
	_putchar('\n');
}
