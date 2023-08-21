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
