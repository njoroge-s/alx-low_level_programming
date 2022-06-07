#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Descrription: the function prints last digit
 * @s: digit from which we find the last number
 * Return: the last digit
 */
int print_last_digit(int s)
{
	if (s < 0)
		s = s * -1;
	_putchar((s % 10) + '0');
	return (s % 10);
}
