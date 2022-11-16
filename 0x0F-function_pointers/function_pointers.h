#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void reset_to_98(int *n);
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_add(int a, int b);
int (*get_op_func(char *s))(int, int);



#endif
