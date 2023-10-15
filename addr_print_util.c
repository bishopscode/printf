#include "main.h"
#include <stdio.h>
/**
 * print_addr- prints the address of an input variable
 * @arguments: input address.
 * @buff: buffer pointer.
 * @ibuff: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int print_addr(va_list arguments, char *buff, unsigned int ibuff)
{
	void *addr;
	long int int_input;
	int i, count, first_digit, isnegative;
	char *hexadecimal, *bin;
	char nill[] = "(nil)";

	addr = (va_arg(arguments, void *));
	if (addr == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuff = com_buff(buff, nill[i], ibuff);
		return (5);
	}
	int_input = (intptr_t)addr;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	bin = malloc(sizeof(char) * (64 + 1));
	bin = load_binary_conv(bin, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = load_hex_conv(bin, hexadecimal, 0, 16);
	ibuff = com_buff(buff, '0', ibuff);
	ibuff = com_buff(buff, 'x', ibuff);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuff = com_buff(buff, hexadecimal[i], ibuff);
			count++;
		}
	}
	free(bin);
	free(hexadecimal);
	return (count + 2);
}
