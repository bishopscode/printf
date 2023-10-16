#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for print functions
 * @type_arg: idenf
 * @f: ptr to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prog(va_list __attribute__((unused)), char *, unsigned int);
int print_char(va_list arguments, char *buff, unsigned int ibuff);
int print_str(va_list arguments, char *buff, unsigned int ibuff);
int print_int(va_list arguments, char *buff, unsigned int ibuff);
int print_bin(va_list arguments, char *buff, unsigned int ibuff);
int print_unt(va_list arguments, char *buff, unsigned int ibuff);
int print_oct(va_list arguments, char *buff, unsigned int ibuff);
int print_hex(va_list arguments, char *buff, unsigned int ibuff);
int print_upx(va_list arguments, char *buff, unsigned int ibuff);
int print_usr(va_list arguments, char *buff, unsigned int ibuff);
int print_addr(va_list arguments, char *buff, unsigned int ibuff);
int print_rev(va_list arguments, char *buff, unsigned int ibuff);
int print_rot(va_list arguments, char *buff, unsigned int ibuff);
int prtlint(va_list arguments, char *buff, unsigned int ibuff);
int prtlunt(va_list arguments, char *buff, unsigned int ibuff);
int prtloct(va_list arguments, char *buff, unsigned int ibuff);
int prtlhex(va_list arguments, char *buff, unsigned int ibuff);
int prtlupx(va_list arguments, char *buff, unsigned int ibuff);
int prthint(va_list arguments, char *buff, unsigned int ibuff);
int prthunt(va_list arguments, char *buff, unsigned int ibuff);
int prthoct(va_list arguments, char *buff, unsigned int ibuff);
int prthhex(va_list arguments, char *buff, unsigned int ibuff);
int prthupx(va_list arguments, char *buff, unsigned int ibuff);
int prtpint(va_list arguments, char *buff, unsigned int ibuff);
int prtnoct(va_list arguments, char *buff, unsigned int ibuff);
int prtnhex(va_list arguments, char *buff, unsigned int ibuff);
int prtnupx(va_list arguments, char *buff, unsigned int ibuff);
int prtsint(va_list arguments, char *buff, unsigned int ibuff);
int (*fetch_print_func(const char *s, int index))(va_list, char *, unsigned int);
int id_print_func(const char *s, int index);
unsigned int com_buff(char *buff, char c, unsigned int ibuff);
int print_buff(char *buff, unsigned int nbuff);
char *load_binary_conv(char *binary, long int int_in, int isneg, int lmt);
char *load_oct_conv(char *bin, char *oct);
char *load_long_oct_conv(char *bin, char *oct);
char *load_short_oct_conv(char *bin, char *oct);
char *load_hex_conv(char *bin, char *hex, int isupp, int lmt);

#endif
