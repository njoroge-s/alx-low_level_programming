#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the sting to be printed
 */
void print_rev(char *s)
{
	int k;
	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	while (k >= 0)
	{
		putchar(str[k]);
		k--;
	}
	putchar('\n');
}
