#ifndef _CALC_H_
#define _CALC_H_

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulo(int a, int b);
int (*get_operation_function(char *symbol))(int, int);

typedef struct op
{
char *symbol;
int (*operation)(int a, int b);
} operation_t;

#endif
