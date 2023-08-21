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
	char *str;
	int i, len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = str_len(str);

		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = str_len(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
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

/**
 * printf_i - print integer
 * @val: value to print
 *
 * Return: i
 */
int printf_i(va_list val)
{
	int n = va_arg(val, int);
	int number = _abs(n);
	int lastDigit = n % 10;
	int digit, exp = 1;
	int i = 1;

	while ((number / 10) != 0)
	{
		exp *= 10;
		number /= 10;
	}

	if (n < 0)
	{
		_putchar('-');
		i++;
	}
	number = n;

	while (exp > 0)
	{
		digit = number / exp;
		_putchar(digit + '0');
		number -= digit * exp;
		exp /= 10;
		i++;
	}
	_putchar(lastDigit + '0');

	return (i);
}
/**
 * printf_int - print integer
 * @val: value to print
 *
 * Return: i
 */
int printf_int(va_list val)
{
	int n = va_arg(val, int);
	int number = _abs(n);
	int lastDigit = n % 10;
	int digit, exp = 1;
	int i = 1;

	while ((number / 10) != 0)
	{
		exp *= 10;
		number /= 10;
	}

	if (n < 0)
	{
		_putchar('-');
		i++;
	}
	number = n;

	while (exp > 0)
	{
		digit = number / exp;
		_putchar(digit + '0');
		number -= digit * exp;
		exp /= 10;
		i++;
	}
	_putchar(lastDigit + '0');

	return (i);
}

/**
 * print_dec - print decimal
 * val: value to print
 *
 * Return: i
 */

int print_dec(va_list val)
{
	int n = va_arg(val, int);
	int number = _abs(n);
	int lastDigit = n % 10;
	int digit, exp = 1;
	int i = 1;

	while ((number / 10) != 0)
	{
		exp *= 10;
		number /= 10;
	}

	if (n < 0)
	{
		_putchar('-');
		i++
	}
	number = n;

	while (exp > 0)
	{
		digit = number / exp;
		_putchar(digit + '0');
		number -= digit * exp;
		exp /= 10;
		i++;
	}
	_putchar(lastDigit + '0');
	return (i);
}
