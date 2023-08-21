#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct format - match the conversion specifires for printf
 * @c: type char pointer of the specifier
 * @f: type pointer to function
 *
 */

typedef struct format
{
	char *c;
	int (*f)();
} my_struct;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list val);
int print_s(va_list val);
int str_len(char *s);
int str_lenc(const char *s);
int print_int(va_list arg);
int _abs(int num);
int print_dec(va_list val);
int print_percentage(void);

<<<<<<< HEAD
=======


>>>>>>> f32cc00 (adding library)
#endif
