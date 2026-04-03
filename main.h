#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* main function */
int _printf(const char *format, ...);

/* handlers */
int handle_print(const char *format, int *i, va_list list);

/* print functions */
int print_char(va_list list);
int print_string(va_list list);
int print_percent(void);
int print_int(va_list list);

/* utils */
int _putchar(char c);
int print_number(int n);

#endif
