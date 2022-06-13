#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints out every character on the string
 * @str: input string
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
