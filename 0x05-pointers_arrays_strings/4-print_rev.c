#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the sting to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int live;

	for (live = 0; != '\0'; live++)
	{
	}
	for (live = live - 1; live >= 0; live--)
	{
		_putchar(s[live]);
	}
	_putchar('\n');
}
