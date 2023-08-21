#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *
 */

typedef struct format
{
	char *c;
	int (*f)();
} format;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list val);
int printf_s(va_list val);
int _slength(char *s);
int _slengthc(const char *s);
int printf_i(va_list arg);


#endif
