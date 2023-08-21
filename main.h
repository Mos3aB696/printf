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
int str_len(char *s);
int str_lenc(const char *s);
int printf_int(va_list arg);
int _abs(int num);
int print_dec(va_list val)



#endif
