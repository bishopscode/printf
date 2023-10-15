#ifndef main_h
#define main_h

char *load_ bin_conv(char *bin, long int int_input, int isnegative, int lmt);
char *load_long_oct_number(char *bin, char *octal);
char *load_short_octal_print(char *bin, char *octal);
int (*fetch_print_func(const char *s, int index))(va_list, char *, unsigned int);
char *load_short_octal_print(char *bin, char *octal);
int print_addr(va_list arguments, char *buff, unsigned int ibuff);
int print_prog(va_list a __attribute__((unused)), char *buf, unsigned int i);
int _printf(const char *format, ...);
unsigned int com_buff(char *buff, char c, unsigned int ibuff);
int print_buff(char *buff, unsigned int nbuff);
int print_char(va_list arguments, char *buff, unsigned int ibuff);
int print_hex(va_list arguments, char *buff, unsigned int ibuff);
int id_print_func(const char *s, int index);
int prtpint(va_list arguments, char *buff, unsigned int ibuff);
int print_int(va_list arguments, char *buff, unsigned int ibuff); 
char *load_hex_conv(char *bin, char *hex, int isupp, int lmt);
char *load_hex_number(char *bin, char *hex, int isupp, int lmt);
char *load_long_oct_conv(char *bin, char *octal);
char *load_short_octal_conv(char *bin, char *octal);
int prtlhex(va_list arguments, char *buff, unsigned int ibuff);`
int prtlint(va_list arguments, char *buff, unsigned int ibuff);
int prtloct(va_list arguments, char *buff, unsigned int ibuff);
int prtlunt(va_list arguments, char *buff, unsigned int ibuff);
int prtlupx(va_list arguments, char *buff, unsigned int ibuff);
int pritnhex(va_list arguments, char *buff, unsigned int ibuff);
int prtnoct(va_list arguments, char *buff, unsigned int ibuff);
int prtnupx(va_list arguments, char *buff, unsigned int ibuff);
int print_oct(va_list arguments, char *buff, unsigned int ibuff);
int print_prog(va_list a __attribute__((unused)), char *buf, unsigned int i);
int print_rev(va_list arguments, char *buff, unsigned int ibuff);
int print_rot(va_list arguments, char *buff, unsigned int ibuff);
int prthhex(va_list arguments, char *buff, unsigned int ibuff);
int prthint(va_list arguments, char *buff, unsigned int ibuff);
int prthoct(va_list arguments, char *buff, unsigned int ibuff);
int prthunt(va_list arguments, char *buff, unsigned int ibuff);
int prthupx(va_list arguments, char *buff, unsigned int ibuff);
int prtsint(va_list arguments, char *buff, unsigned int ibuff);
int print_str(va_list arguments, char *buff, unsigned int ibuff);
int print_unt(va_list arguments, char *buff, unsigned int ibuff);
int print_upx(va_list arguments, char *buff, unsigned int ibuff);
int print_usr(va_list arguments, char *buff, unsigned int ibuff);


#endif
