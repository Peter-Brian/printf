#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _position(const char *s, int n);
int _strlen(char *s);
int _abs(int n);
int _numlen(int n);
char *_strcat(char *dest, char *src, int n);
void *rev_string(char *s);

/**
 * struct type - structure datatype
 * @op: type arguement
 * @f: assofiated functio
 */

typedef struct type
{
	char *op;
	char *(*f)(va_list);
} type_t;

char *print_c(va_list list);
char *print_s(va_list list);
char *print_i(va_list list);
char *print_bin(va_list list);

#endif
