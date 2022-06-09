#include "main.h"

/**
 * print_number - prints a number
 * @n: input number
 */
void print_number(int n)
{
	long len, res, i, temp, expo;

	res = n;
	expo = len = 1;

	/**check negatives*/
	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}

	temp = res;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

	/**create exponent*/
	for (i = 1; i < len; i++)
		expo *= 10;
	/**main*/
	while (expo > 1)
	{
		_putchar((res / expo) % 10 + '0');
		expo /= 10;
	}
	_putchar(res % 10 + '0');
}
