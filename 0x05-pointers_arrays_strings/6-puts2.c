#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints out every character on the string
 * @str: input string
 * Return: string
 */
void puts2(char *str)
{
	int x = strlen(str);
	int i;

	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}
