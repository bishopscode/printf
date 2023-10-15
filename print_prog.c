#include "main.h"
#include <stdio.h>

/**
 * print_prog - writes the character c to stdout
 * @a: input char
 * @buff: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int print_prog(va_list a __attribute__((unused)), char *buff, unsigned int i)
{
	com_buff(buff, '%', i);

	return (1);
}
