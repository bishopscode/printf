#include "main.h"
/**
 * prtlint - prints a long integer
 * @arguments: input string
 * @buff: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed.
 */
int prtlint(va_list arguments, char *buff, unsigned int ibuff)
{
	long int int_input;
	unsigned long int int_in, int_temp, i, div, isnegative;

	int_input = va_arg(arguments, long int);
	isnegative = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuff = com_buff(buff, '-', ibuff);
		isnegative = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuff = com_buff(buff, ((int_in / div) % 10) + '0', ibuff);
	}
	return (i + isnegative);
}
