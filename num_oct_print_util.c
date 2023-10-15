#include "main.h"

/**
 * prtnoct - print the number in octal begining with zero
 * @arguments: input string
 * @buff: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 */
int prtnoct(va_list arguments, char *buff, unsigned int ibuff)
{
	int int_input, i, isnegative, count, first_digit;
	char *octal, *binary;

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
	ibuff = com_buff(buff, '0', ibuff);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = load_binary_conv(binary, int_input, isnegative, 32);
	octal = malloc(sizeof(char) * (11 + 1));
	octal = load_octal_conv(binary, octal);
	for (first_digit = i = count = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuff = com_buff(buff, octal[i], ibuff);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count + 1);
}
