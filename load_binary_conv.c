#include "main.h"

/**
 * load_binary_cov - prints decimal in binary
 * @binary: pointer to binary
 * @int_in: input number
 * @isneg: if input number is negative
 * @lmt: size of the binary
 * Return: number of chars printed.
 */
char *load_binary_conv(char *binary, long int int_in, int isneg, int lmt)
{
	int i;

	for (i = 0; i < lmt; i++)
		binary[i] = '0';
	binary[lmt] = '\0';
	for (i = lmt - 1; int_in > 1; i--)
	{
		if (int_in == 2)
			binary[i] = '0';
		else
			binary[i] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		binary[i] = '1';
	if (isneg)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
	}
	return (binary);
}
