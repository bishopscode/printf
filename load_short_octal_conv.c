#include "main.h"

/**
 * load_short_octal_conv - the calculation of a short octal number
 * @bin: arr that is stored in the binary.
 * @octal: the array that is stored in the octal.
 *
 * Return: bin array.
 */
char *load_short_octal_conv(char *bin, char *octal)
{
	int og, i, j, ioctal, lmt;

	octal[6] = '\0';
	for (i = 15, ioctal = 5; i >= 0; i--, ioctal--)
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
