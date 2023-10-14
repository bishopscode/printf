#include "main.h"

/**
 * load_long_oct_number - the calculation of a long octal number
 *
 * @bin: array where is stored the binary.
 * @octal: array where is stored the octal.
 *
 * Return: bin array.
 */
char *load_long_oct_number(char *bin, char *octal)
{
	int og, b, k, ioctal, lmt;

	octal[22] = '\0';
	for (b = 63, ioctal = 21; b >= 0; b--, ioctal--)
	{
		if (b > 0)
			lmt = 4;
		else
			lmt = 1;
		for (og = 0, j = 1; j <= lmt; k *= 2, b--)
			og = ((bin[b] - '0') * k) + og;
		b++;
		octal[ioctal] = og + '0';
	}
	return (octal);
}
