#include <stdio.h>

/**
 * my_startup_func - prints a message before the main function is executed
 * Return: Nothing
 */
void my_startup_func(void) __attribute__ ((constructor));

void my_startup_func(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
