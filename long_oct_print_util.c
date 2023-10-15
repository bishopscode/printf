#include "main.h"
/**
 * prtloct - prints long decimal number in octal
 * @arguments: input number
 * @buff: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed.
 */
int prtloct(va_list arguments, char *buff, unsigned int ibuff)
{
	long int int_input, i, isnegative, count, first_digit;
	char *octal, *binary;

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
	octal = malloc(sizeof(char) * (22 + 1));
	octal = load_long_oct_conv(binary, octal);
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
	return (count);
}
