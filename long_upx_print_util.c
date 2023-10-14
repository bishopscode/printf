#include "main.h"

/**
 * prtlupx - prints a long decimal in hexadecimal
 * @arguments: The character to print
 * @buff: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 */
int prtlupx(va_list arguments, char *buff, unsigned int ibuff)
{
	long int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(arguments, long int);
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

	binary = malloc(sizeof(char) * (64 + 1));
	binary = load_binary_conv(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = load_hex_conv(binary, hexadecimal, 1, 16);
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
	return (count);
}
