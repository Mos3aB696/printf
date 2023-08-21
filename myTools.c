#include "main.h"

/**
 * _putchar - writes the char
 * @c: the charcter to print
 *
 * Return: 1 on Success
 * on ERROR -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _abs - absoute value of an integer
 * @num: the Number
 *
 * Return: 0
 */
int _abs(int num)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-num);
	else
		return (0);
}
/**
 * str_len - return length of string
 * @s: string
 *
 * Return: length
 */

int str_len(char *s)
{
	int l;

	for (l = 0; s[l] != 0; l++)
		;

	return (l);
}

/**
 * str_lenc - str_len function for constant string
 * @s: string
 *
 * Return: length
 */
int str_lenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
