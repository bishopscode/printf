#include "main.h"

/**
 * print_usr - prints a string and values of
 * non-printed chars
 * @arguments: input string
 * @buff: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 */
int print_usr(va_list arguments, char *buff, unsigned int ibuff)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int i, sum, og;

	str = va_arg(arguments, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			ibuff = com_buff(buff, '\\', ibuff);
			ibuff = com_buff(buff, 'x', ibuff);
			og = str[i];
			binary = load_binary_conv(binary, og, 0, 32);
			hexadecimal = load_hex_conv(binary, hexadecimal, 1, 8);
			ibuff = com_buff(buff, hexadecimal[6], ibuff);
			ibuff = com_buff(buff, hexadecimal[7], ibuff);
			sum += 3;
		}
		else
			ibuff = com_buff(buff, str[i], ibuff);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
