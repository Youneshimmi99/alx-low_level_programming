#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int num_args, ...);
void print_numbers(const char *delimiter, const unsigned int num_args, ...);

#endif
