#include "main.h"

/**
 * prthhex - prints a short decimal in hexadecimal
 * @arguments: input string
 * @buff: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 */
int prthhex(va_list arguments, char *buff, unsigned int ibuff)
{
	short int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(arguments, int);
	isnegative = 0;
	if (int_input == 0)
	{
		ibuff = com_buff(buff, '0', ibuff);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}

	binary = malloc(sizeof(char) * (16 + 1));
	binary = load_binary_conv(binary, int_input, isnegative, 16);
	hexadecimal = malloc(sizeof(char) * (4 + 1));
	hexadecimal = load_hex_conv(binary, hexadecimal, 0, 4);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuff = conm_buff(buff, hexadecimal[i], ibuff);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count);
}
