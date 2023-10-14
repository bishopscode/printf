#include "main.h"

/**
 * bin_converter - prints decimal in binary
 * @bin: pointer to binary
 * @int_input: input number
 * @isnegative: if input number is negative
 * @lmt: size of the binary
 * Return: number of chars printed.
 */
char bin_converter(char *bin, long int int_input, int isnegative, int lmt)

	int i;

	for (i = 0; i < lmt; i++)
		bin[i] = '0';
	bin[lmt] = '\0';
	for (i = lmt - 1; int_input > 1; i--)
	{
		if (int_input == 2)
			bin[i] = '0';
		else
			bin[i] = (int_input % 2) + '0';
		int_input /= 2;
	}
	if (int_input != 0)
		bin[i] = '1';
	if (isnegative)
	{
		for (i = 0; bin[i]; i++)
			if (bin[i] == '0')
				bin[i] = '1';
			else
				bin[i] = '0';
	}
	return (bin);
}
