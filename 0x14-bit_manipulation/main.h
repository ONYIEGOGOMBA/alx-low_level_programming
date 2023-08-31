#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void function1(int arg1, float arg2);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int function2(char arg);
void function3();

#endif /* MAIN_H */
