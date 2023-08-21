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
 * print_s - print a string
 * @val: argument
 *
 * Return: length of string
 */
int print_s(va_list val)
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
 * print_int - print integer
 * @val: value to print
 *
 * Return: i
 */
int print_int(va_list val)
{
	int n = va_arg(val, int);
	int num, l_dig = n % 10, dig;
	int i = 1, exp = 1;

	n = n / 10;
	num = n;

	if (l_dig < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		l_dig = -l_dig;
		i++;
	}
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num -= dig * exp;
			exp /= 10;
			i++;
		}
	}
	_putchar(l_dig + '0');
	return (i);
}

/**
 * print_dec - print decimal
 * @val: value to print
 *
 * Return: i
 */

int print_dec(va_list val)
{
	int n = va_arg(val, int);
	int num, l_dig = n % 10, dig;
	int i = 1, exp = 1;

	n = n / 10;
	num = n;

	if (l_dig < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		l_dig = -l_dig;
		i++;
	}
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num -= dig * exp;
			exp /= 10;
			i++;
		}
	}
	_putchar(l_dig + '0');
	return (i);
}
/**
 * print_percentage - print %
 * Return: 1
 */

int print_percentage(void)
{
	_putchar('%');
	return (1);
}
