#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints out every character on the string
 * @str: input string
 * Return: string
 */
void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *c = str;
	int x;
	
	while (*c != '\0')
	{
		c++;
	}
	l = len - 1;
	for (x = 0; x <= 1; x++)
	{
	if (x % 2 == 0)
	{
		_putchar(str[x]);
	}
	}
	_putchar('\n');
}
