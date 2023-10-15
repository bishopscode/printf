#ifndef main_h
#define main_h

char *load_ bin_conv(char *bin, long int int_input, int isnegative, int lmt);
char *load_long_oct_number(char *bin, char *octal);
char *load_short_octal_print(char *bin, char *octal);
int (*fetch_print_func(const char *s, int index))(va_list, char *, unsigned int);
char *load_short_octal_print(char *bin, char *octal);
int print_addr(va_list arguments, char *buff, unsigned int ibuff);













#endif
