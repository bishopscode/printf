#include "main.h"

/**
 * load_binary_conv - prints decimal in binary
 * @binary: pointer to binary
 * @int_input: input number
 * @isnegative: if input number is negative
 * @lmt: size of the binary
 * Return: number of chars printed.
 */
char load_ binary_conv(char *binary, long int int_input, int isnegative, int lmt)

	int i;

	for (i = 0; i < lmt; i++)
		binary[i] = '0';
	binary[lmt] = '\0';
	for (i = lmt - 1; int_input > 1; i--)
	{
		if (int_in == 2)
			binary[i] = '0';
		else
			binary[i] = (int_input % 2) + '0';
		int_input /= 2;
	}
	if (int_input != 0)
		binary[i] = '1';
	if (isnegative)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binar[i] = '0';
	}
	return (binary);
}
