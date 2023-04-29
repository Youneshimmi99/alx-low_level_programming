#include <stdio.h>

/**
 * my_startup_func - prints a message before main is executed
 * Return: Nothing
 */

void __attribute__ ((constructor)) my_startup_func()
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
