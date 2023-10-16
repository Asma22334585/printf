#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_WA;

int _printf(const char *format, ...);
int (*g_p_f(const char *s, int index))(va_list, char *, unsigned int);
int e_p_f(const char *s, int index);
char *f_b_r(char *c, long int k, int m, int l);
char *f_h_r(char *b, char *hex, int upp, int l);
char *f_l_o_a(char *b, char *o);
char *f_s_o_a(char *b, char *o);
char *fill_octal_array(char *b, char *o);
unsigned int handl_buffer(char *buf, char c, unsigned int ibuf);
int print_long_oct(va_list ap, char *buf, unsigned int ibuf);
int printldoct(va_list ap, char *buf, unsigned int ibuf);
int print_address(va_list ap, char *buf, unsigned int ibuf);
int print_b(va_list ap, char *buf, unsigned int ibuf);
int print_buffer(char *buf, unsigned int nbuf);
int print_char(va_list ap, char *buf, unsigned int ibuf);
int print_hexd(va_list ap, char *buf, unsigned int ibuf);
int print_integer(va_list ap, char *buf, unsigned int ibuf);
int printlhexdecimal(va_list ap, char *buf, unsigned int ibuf);
int printlint(va_list ap, char *buf, unsigned int ibuf);
int printlunint(va_list ap, char *buf, unsigned int ibuf);
int printnumhex(va_list ap, char *buf, unsigned int ibuf);
int printnumocta(va_list ap, char *buf, unsigned int ibuf);
int printnupphex(va_list ap, char *buf, unsigned int ibuf);
int print_octal(va_list ap, char *buf, unsigned int ibuf);
int print_prg(va_list u, char *buf, unsigned int q);
int printpint(va_list ap, char *buf, unsigned int ibuf);
int print_r(va_list ap, char *buf, unsigned int ibuf);
int print_rot13(va_list ap, char *buf, unsigned int ibuf);
int print_s(va_list ap, char *buf, unsigned int ibuf);
int printshhex(va_list ap, char *buf, unsigned int ibuf);
int printshunint(va_list ap, char *buf, unsigned int ibuf);
int printshint(va_list ap, char *buf, unsigned int ibuf);
int printhupphex(va_list ap, char *buf, unsigned int ibuf);
int printspace(va_list ap, char *buf, unsigned int ibuf);
int print_unint(va_list ap, char *buf, unsigned int ibuf);
int print_uphex(va_list ap, char *buf, unsigned int ibuf);
int print_usr(va_list ap, char *buf, unsigned int ibuf);

#endif
