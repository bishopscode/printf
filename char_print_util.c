#include "main.h"
#include <stdio.h>
/**
 * print_char -  writes the character c to stdout
 * @arguments: input char
 * @buff: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: On success 1.
 */
int print_char(va_list arguments, char *buff, unsigned int ibuff)
{
	char c;

	c = va_arg(arguments, int);
	com_buff(buff, c, ibuff);

	return (1);
}
