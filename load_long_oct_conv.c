#include "main.h"

/**
 * load_long_oct_conv - the calculation of a long octal number
 *
 * @bin: arr where is stored the binary.
 * @octal: arr where is stored the octal.
 *
 * Return: bin array.
 */
char *load_long_oct_conv(char *bin, char *octal)
{
	int og, i, j, ioctal, lmt;

	octal[22] = '\0';
	for (i = 63, ioctal = 21; i >= 0; i--, ioctal--)
	{
		if (i > 0)
			lmt = 4;
		else
			lmt = 1;
		for (og = 0, j = 1; j <= lmt; j *= 2, i--)
			og = ((bin[i] - '0') * j) + og;
		i++;
		octal[ioctal] = og + '0';
	}
	return (octal);
}
