#include "main.h"

/**
 * prtnhex - print number in hex begining with zero
 * @arguments: input string
 * @buff: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 */
int prtnhex(va_list arguments, char *buff, unsigned int ibuff)
{
	int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(arguments, int);
	isnegative = 0;
	if (int_input == 0)
	{
		ibuff = com_buf(buff, '0', ibuff);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	ibuf = com_buff(buff, '0', ibuff);
	ibuf = com_buff(buff, 'x', ibuff);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = load_binary_conv(binary, int_input, isnegative, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = load_hex_conv(binary, hexadecimal, 0, 8);
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
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
