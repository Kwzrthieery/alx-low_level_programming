#include "main.h"
/**
 * string_toupper - change all owercas letters of a string
 * to uppercase
 *
 * @S: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{

	int x = 0;

	while (*(s + x))
	{
		if ((*(s + x) >= 97) && (*(s + x) <= 122))
			*(s + x) = *(s + x) - 32;
		x++;
	}
	return (s);
}