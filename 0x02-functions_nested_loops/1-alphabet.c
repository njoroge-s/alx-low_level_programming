#include "main.h"
/**
 * print_alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char s;
	s = 'a';
	char termx ='z';

	while(s <= termx)
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
