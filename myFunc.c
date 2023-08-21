#include "main.h"

/**
 * print_c - print the charcter
 * @val: char to print
 *
 * Return: (1)
 */

int print_c(va_list val)
{
	char c = va_arg(val, int);

	_putchar(c);
	return (1);
}

/**
 * printf_s - print a string
 * @val: argument
 *
 * Return: length of string
 */
int printf_s(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);

		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

/**
 * _slength - return length of string
 * @s: string
 *
 * Return: length
 */

int _slength(char *s)
{
	int l;

	for (l = 0; s[l] != 0; l++)
		return (l);
}

/**
 * _slengthc - slength function for constant string
 * @s: string
 *
 * Return: length
 */
int _slengthc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

/**
 * printf_i - print integer
 * @arg: argument to print
 *
 * Return: numbers of characters
 */
int printf_i(va_list arg)
{
	int n = va_arg(arg, int);
	int number, lastDigit = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	number = n;

	if (lastDigit < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		lastDigit = -lastDigit;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = n;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(lastDigit + '0');

	return (i);
}