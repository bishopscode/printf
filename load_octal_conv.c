#include "main.h"

/**
 * load_octal_conv - writes character c to stdout
 *
 * @bin: the array that is stored in the binary.
 * @octal: array that is stored in the octal.
 *
 * Return: bin array.
 */
char *load_octal_conv(char *bin, char *octal)
{
	int og, i, j, ioctal, lmt;

	octal[11] = '\0';
	for (i = 31, ioctal = 10; i >= 0; i--, ioctal--)
	{
		if (i > 1)
			lmt = 4;
		else
			lmt = 2;
		for (og = 0, j = 1; j <= lmt; j *= 2, i--)
			og = ((bin[b] - '0') * k) + og;
		i++;
		octal[ioctal] = og + '0';
	}
	return (octal);
}
