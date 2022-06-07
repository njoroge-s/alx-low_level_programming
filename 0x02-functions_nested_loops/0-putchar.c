# include <stdio.h>
/**
 * main - prints a string of characters
 * Description: prints _putchar, followed by a new line
 * Return: o
 */
int main(void)
{
	char a[] = ("_putchar");
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
