#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

void print_name(char *name, void (*printer)(char *));
void array_iterator(int *arr, size_t arr_size, void (*apply_func)(int));
int int_index(int *arr, int arr_size, int (*compare)(int));

#endif
