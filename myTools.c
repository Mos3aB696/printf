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
