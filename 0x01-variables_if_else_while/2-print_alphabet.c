#include <stdio.h>
/**
 * main - main function
 *
 * Return: End the program
 */
int main(void)
{
	char l = 97;

	while (l <= 122)
	{
		putchar(l);
		++l;
	}
	putchar(10);

	return (0);
}

